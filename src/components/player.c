#include "../headers/player.h"

Controls controls = {.UP_KEY = KEY_W,
                     .DOWN_KEY = KEY_S,
                     .LEFT_KEY = KEY_A,
                     .RIGHT_KEY = KEY_D,
                     .ATTACK_KEY = KEY_SPACE};

Player player;
Camera2D camera;

Texture2D objFoodTexture;
Texture2D objRifleTexture;
Texture2D objMacheteTexture;

void InitPlayer(Sprite *sprite, Sprite *actSprite, Rectangle screen)
{
    player.position.x = REL_TILE_SIZE * 2;
    player.position.y = REL_TILE_SIZE * 4;
    player.color = WHITE;
    player.direction = 1;
    player.heldItem = NONE;

    camera.target = (Vector2){player.position.x, player.position.y};
    camera.offset = (Vector2){(screen.width / 2) - (TILE_SIZE * 2), (screen.height / 2) - (TILE_SIZE * 2)};
    camera.zoom = 1.0f;
}

void actPlayer(Player *player, Music *sfx, LevelData room)
{
    movePlayer(player, sfx, room);

    if (IsKeyPressed(KEY_ONE))
    {
        player->heldItem = FOOD;
    }

    if (IsKeyPressed(KEY_TWO))
    {
        player->heldItem = RIFLE;
    }

    if (IsKeyPressed(KEY_THREE))
    {
        player->heldItem = MACHETE;
    }

    if (IsKeyPressed(KEY_ZERO))
    {
        player->heldItem = NONE;
    }

    playerHold(player);
}

void movePlayer(Player *player, Music *sfx, LevelData room)
{
    float old_x = player->position.x;
    float old_y = player->position.y;

    Vector2 direction = {0.0f, 0.0f};

    if (IsKeyDown(controls.UP_KEY))
    {
        direction.y -= 1.0f;
    }
    if (IsKeyDown(controls.DOWN_KEY))
    {
        direction.y += 1.0f;
    }
    if (IsKeyDown(controls.LEFT_KEY))
    {
        direction.x -= 1.0f;
        player->direction = -1;
    }

    if (IsKeyDown(controls.RIGHT_KEY))
    {
        direction.x += 1.0f;
        player->direction = 1;
    }

    if (Vector2Length(direction) > 0.0f)
    {
        direction = Vector2Normalize(direction);

        bool collision_x = false;
        bool collision_y = false;
        Vector2 new_position;

        new_position.x = player->position.x + direction.x * player->speed * GetFrameTime();
        new_position.y = player->position.y + direction.y * player->speed * GetFrameTime();

        // Check for collisions in the x direction
        for (int i = 0; i < room.wallsCount; i++)
        {
            if (IsRectangleOnCamera((Rectangle){0, 0, room.walls[i].x, room.walls[i].y}, camera))
            {
                if (CheckCollisionRecs((Rectangle){new_position.x, player->position.y, REL_TILE_SIZE, REL_TILE_SIZE}, (Rectangle){room.walls[i].x, room.walls[i].y, REL_TILE_SIZE, REL_TILE_SIZE}))
                {
                    collision_x = true;
                }

                if (CheckCollisionRecs((Rectangle){player->position.x, new_position.y, REL_TILE_SIZE, REL_TILE_SIZE}, (Rectangle){room.walls[i].x, room.walls[i].y, REL_TILE_SIZE, REL_TILE_SIZE}))
                {
                    collision_y = true;
                }
            }
        }

        // Check if the player is colliding with an object
        for (int i = 0; i < room.objectsCount; i++)
        {
            if (IsRectangleOnCamera(room.objects[i], camera))
            {
                if (CheckCollisionRecs((Rectangle){new_position.x, player->position.y, REL_TILE_SIZE, REL_TILE_SIZE}, room.objects[i]))
                {
                    collision_x = true;
                }

                if (CheckCollisionRecs((Rectangle){player->position.x, new_position.y, REL_TILE_SIZE, REL_TILE_SIZE}, room.objects[i]))
                {
                    collision_y = true;
                }
            }
        }

        if (!collision_x)
        {
            player->position.x = new_position.x;
        }
        if (!collision_y)
        {
            player->position.y = new_position.y;
        }

        if (old_x != player->position.x || old_y != player->position.y)
        {
            player->isAnimated = true;
            UpdateMusicStream(*sfx);
            PlayMusicStream(*sfx);
        }
        else
        {
            player->isAnimated = false;
        }
    }
    else
    {
        player->isAnimated = false;
    }
}

void playerHold(Player *player)
{
    if (player->heldItem != NONE)
    {
        player->sprite = charPickSprite;

        switch (player->heldItem)
        {
        case FOOD:
            player->heldTexture = objFoodTexture;
            break;
        case RIFLE:
            player->heldTexture = objRifleTexture;
            break;
        case MACHETE:
            player->heldTexture = objMacheteTexture;
            break;
        }

        player->speed = 300.0f;
    }
    else
    {
        player->sprite = charSprite;
        player->speed = 350.0f;
    }
}

void InitObjects()
{
    // Load images
    Image objFoodImage = LoadImage(ASSETS_PATH "Objetos/Plato.png");
    Image objRifleImage = LoadImage(ASSETS_PATH "Objetos/Rifle.png");
    Image objMacheteImage = LoadImage(ASSETS_PATH "Objetos/Machete.png");

    // Load textures
    objFoodTexture = LoadTextureFromImage(objFoodImage);
    objRifleTexture = LoadTextureFromImage(objRifleImage);
    objMacheteTexture = LoadTextureFromImage(objMacheteImage);

    // Unload images
    UnloadImage(objFoodImage);
    UnloadImage(objRifleImage);
    UnloadImage(objMacheteImage);
}