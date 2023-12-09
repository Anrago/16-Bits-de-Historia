#include "../headers/npc.h"

NPC enojado1;
NPC enojado2;
NPC enojado3;
NPC enojado4;

NPC tirado1;

NPC recargado1;
NPC recargado2;
NPC recargado3;
NPC recargado4;
NPC recargado5;

NPC saco1;
NPC saco2;
NPC saco3;
NPC saco4;
NPC saco5;
NPC saco6;
NPC saco7;
NPC saco8;
NPC saco9;
NPC saco10;

void InitNPCs(Rectangle screen)
{
    // *** Room 1 ***

    enojado1.name = "Adan";
    enojado1.position.x = REL_TILE_SIZE * 21;
    enojado1.position.y = REL_TILE_SIZE * 4;
    enojado1.color = WHITE;
    enojado1.direction = 1;
    enojado1.requiredItem = MACHETE;
    enojado1.status = false;

    enojado2.name = "Fernando";
    enojado2.position.x = REL_TILE_SIZE * 26;
    enojado2.position.y = REL_TILE_SIZE * 4;
    enojado2.color = WHITE;
    enojado2.direction = -1;
    enojado2.requiredItem = MACHETE;
    enojado2.status = false;

    enojado3.name = "Ricardo";
    enojado3.position.x = REL_TILE_SIZE * 7;
    enojado3.position.y = REL_TILE_SIZE * 15;
    enojado3.color = WHITE;
    enojado3.direction = -1;
    enojado3.requiredItem = MACHETE;
    enojado3.status = false;

    enojado4.name = "Diego";
    enojado4.position.x = REL_TILE_SIZE * 13;
    enojado4.position.y = REL_TILE_SIZE * 11;
    enojado4.color = WHITE;
    enojado4.direction = -1;
    enojado4.requiredItem = MACHETE;
    enojado4.status = false;

    tirado1.name = "Luis";
    tirado1.position.x = REL_TILE_SIZE * 7;
    tirado1.position.y = REL_TILE_SIZE * 8;
    tirado1.color = WHITE;
    tirado1.direction = 1;
    tirado1.requiredItem = FOOD;
    tirado1.status = false;

    recargado1.name = "Jorge";
    recargado1.position.x = REL_TILE_SIZE * 1;
    recargado1.position.y = REL_TILE_SIZE * 15;
    recargado1.color = WHITE;
    recargado1.direction = 1;
    recargado1.requiredItem = LANZA;
    recargado1.status = false;

    recargado2.name = "Brayan";
    recargado2.position.x = REL_TILE_SIZE * 7;
    recargado2.position.y = REL_TILE_SIZE * 19;
    recargado2.color = WHITE;
    recargado2.direction = -1;
    recargado2.requiredItem = LANZA;
    recargado2.status = false;

    recargado3.name = "Iván";
    recargado3.position.x = REL_TILE_SIZE * 19;
    recargado3.position.y = REL_TILE_SIZE * 20;
    recargado3.color = WHITE;
    recargado3.direction = 1;
    recargado3.requiredItem = LANZA;
    recargado3.status = false;

    recargado4.name = "Kevin";
    recargado4.position.x = REL_TILE_SIZE * 27;
    recargado4.position.y = REL_TILE_SIZE * 16;
    recargado4.color = WHITE;
    recargado4.direction = -1;
    recargado4.requiredItem = LANZA;
    recargado4.status = false;

    recargado5.name = "Diego";
    recargado5.position.x = REL_TILE_SIZE * 30;
    recargado5.position.y = REL_TILE_SIZE * 20;
    recargado5.color = WHITE;
    recargado5.direction = -1;
    recargado5.requiredItem = LANZA;
    recargado5.status = false;

    // *** Room 2 ***

    saco1.position.x = REL_TILE_SIZE * (3);
    saco1.position.y = REL_TILE_SIZE * (4 + 22);
    saco1.color = WHITE;
    saco1.direction = 1;
    saco1.requiredItem = BAG;
    saco1.status = false;

    saco2.position.x = REL_TILE_SIZE * (4);
    saco2.position.y = REL_TILE_SIZE * (3 + 22);
    saco2.color = WHITE;
    saco2.direction = 1;
    saco2.requiredItem = BAG;
    saco2.status = false;

    saco3.position.x = REL_TILE_SIZE * (7);
    saco3.position.y = REL_TILE_SIZE * (5 + 22);
    saco3.color = WHITE;
    saco3.direction = 1;
    saco3.requiredItem = BAG;
    saco3.status = false;

    saco4.position.x = REL_TILE_SIZE * (8);
    saco4.position.y = REL_TILE_SIZE * (10 + 22);
    saco4.color = WHITE;
    saco4.direction = 1;
    saco4.requiredItem = BAG;
    saco4.status = false;

    saco5.position.x = REL_TILE_SIZE * (4);
    saco5.position.y = REL_TILE_SIZE * (18 + 22);
    saco5.color = WHITE;
    saco5.direction = 1;
    saco5.requiredItem = BAG;
    saco5.status = false;

    saco6.position.x = REL_TILE_SIZE * (5);
    saco6.position.y = REL_TILE_SIZE * (18 + 22);
    saco6.color = WHITE;
    saco6.direction = 1;
    saco6.requiredItem = BAG;
    saco6.status = false;

    saco7.position.x = REL_TILE_SIZE * (27);
    saco7.position.y = REL_TILE_SIZE * (4 + 22);
    saco7.color = WHITE;
    saco7.direction = 1;
    saco7.requiredItem = BAG;
    saco7.status = false;

    saco8.position.x = REL_TILE_SIZE * (24);
    saco8.position.y = REL_TILE_SIZE * (10 + 22);
    saco8.color = WHITE;
    saco8.direction = 1;
    saco8.requiredItem = BAG;
    saco8.status = false;

    saco9.position.x = REL_TILE_SIZE * (27);
    saco9.position.y = REL_TILE_SIZE * (18 + 22);
    saco9.color = WHITE;
    saco9.direction = 1;
    saco9.requiredItem = BAG;
    saco9.status = false;

    saco10.position.x = REL_TILE_SIZE * (28);
    saco10.position.y = REL_TILE_SIZE * (17 + 22);
    saco10.color = WHITE;
    saco10.direction = 1;
    saco10.requiredItem = BAG;
    saco10.status = false;
}

void UpdateRoom1NPCs()
{
    // *** Enojados ***
    if (enojado1.status)
        enojado1.sprite = npcEnojado2Sprite;
    else
        enojado1.sprite = npcEnojado1Sprite;

    if (enojado2.status)
        enojado2.sprite = npcEnojado2Sprite;
    else
        enojado2.sprite = npcEnojado1Sprite;

    if (enojado3.status)
        enojado3.sprite = npcEnojado2Sprite;
    else
        enojado3.sprite = npcEnojado1Sprite;

    if (enojado4.status)
        enojado4.sprite = npcEnojado2Sprite;
    else
        enojado4.sprite = npcEnojado1Sprite;

    // *** Tirados ***
    if (tirado1.status)
        tirado1.sprite = npcTirado2Sprite;
    else
        tirado1.sprite = npcTirado1Sprite;

    // *** Recargados ***
    if (recargado1.status)
        recargado1.sprite = npcRecargado2Sprite;
    else
        recargado1.sprite = npcRecargado1Sprite;

    if (recargado2.status)
        recargado2.sprite = npcRecargado2Sprite;
    else
        recargado2.sprite = npcRecargado1Sprite;

    if (recargado3.status)
        recargado3.sprite = npcRecargado2Sprite;
    else
        recargado3.sprite = npcRecargado1Sprite;

    if (recargado4.status)
        recargado4.sprite = npcRecargado2Sprite;
    else
        recargado4.sprite = npcRecargado1Sprite;

    if (recargado5.status)
        recargado5.sprite = npcRecargado2Sprite;
    else
        recargado5.sprite = npcRecargado1Sprite;

    DrawSpriteFrame(&enojado1.sprite, enojado1.position, SCALE, enojado1.color, enojado1.direction, true);
    DrawSpriteFrame(&enojado2.sprite, enojado2.position, SCALE, enojado2.color, enojado2.direction, true);
    DrawSpriteFrame(&enojado3.sprite, enojado3.position, SCALE, enojado3.color, enojado3.direction, true);
    DrawSpriteFrame(&enojado4.sprite, enojado4.position, SCALE, enojado4.color, enojado4.direction, true);

    DrawSpriteFrame(&tirado1.sprite, tirado1.position, SCALE, tirado1.color, tirado1.direction, true);

    DrawSpriteFrame(&recargado1.sprite, recargado1.position, SCALE, recargado1.color, recargado1.direction, true);
    DrawSpriteFrame(&recargado2.sprite, recargado2.position, SCALE, recargado2.color, recargado2.direction, true);
    DrawSpriteFrame(&recargado3.sprite, recargado3.position, SCALE, recargado3.color, recargado3.direction, true);
    DrawSpriteFrame(&recargado4.sprite, recargado4.position, SCALE, recargado4.color, recargado4.direction, true);
    DrawSpriteFrame(&recargado5.sprite, recargado5.position, SCALE, recargado5.color, recargado5.direction, true);
}

void CheckRoom1NPCs(Player *player)
{
    CheckNPC(player, &enojado1);
    CheckNPC(player, &enojado2);
    CheckNPC(player, &enojado3);
    CheckNPC(player, &enojado4);

    CheckNPC(player, &tirado1);

    CheckNPC(player, &recargado1);
    CheckNPC(player, &recargado2);
    CheckNPC(player, &recargado3);
    CheckNPC(player, &recargado4);
    CheckNPC(player, &recargado5);
}

void UpdateRoom2NPCs()
{
    if (saco1.status)
        saco1.sprite = npcSaco2Sprite;
    else
        saco1.sprite = npcSaco1Sprite;

    if (saco2.status)
        saco2.sprite = npcSaco2Sprite;
    else
        saco2.sprite = npcSaco1Sprite;

    if (saco3.status)
        saco3.sprite = npcSaco2Sprite;
    else
        saco3.sprite = npcSaco1Sprite;

    if (saco4.status)
        saco4.sprite = npcSaco2Sprite;
    else
        saco4.sprite = npcSaco1Sprite;

    if (saco5.status)
        saco5.sprite = npcSaco2Sprite;
    else
        saco5.sprite = npcSaco1Sprite;

    if (saco6.status)
        saco6.sprite = npcSaco2Sprite;
    else
        saco6.sprite = npcSaco1Sprite;

    if (saco7.status)
        saco7.sprite = npcSaco2Sprite;
    else
        saco7.sprite = npcSaco1Sprite;

    if (saco8.status)
        saco8.sprite = npcSaco2Sprite;
    else
        saco8.sprite = npcSaco1Sprite;

    if (saco9.status)
        saco9.sprite = npcSaco2Sprite;
    else
        saco9.sprite = npcSaco1Sprite;

    if (saco10.status)
        saco10.sprite = npcSaco2Sprite;
    else
        saco10.sprite = npcSaco1Sprite;

    DrawSpriteFrame(&saco1.sprite, saco1.position, SCALE, saco1.color, saco1.direction, true);
    DrawSpriteFrame(&saco2.sprite, saco2.position, SCALE, saco2.color, saco2.direction, true);
    DrawSpriteFrame(&saco3.sprite, saco3.position, SCALE, saco3.color, saco3.direction, true);
    DrawSpriteFrame(&saco4.sprite, saco4.position, SCALE, saco4.color, saco4.direction, true);
    DrawSpriteFrame(&saco5.sprite, saco5.position, SCALE, saco5.color, saco5.direction, true);
    DrawSpriteFrame(&saco6.sprite, saco6.position, SCALE, saco6.color, saco6.direction, true);
    DrawSpriteFrame(&saco7.sprite, saco7.position, SCALE, saco7.color, saco7.direction, true);
    DrawSpriteFrame(&saco8.sprite, saco8.position, SCALE, saco8.color, saco8.direction, true);
    DrawSpriteFrame(&saco9.sprite, saco9.position, SCALE, saco9.color, saco9.direction, true);
    DrawSpriteFrame(&saco10.sprite, saco10.position, SCALE, saco10.color, saco10.direction, true);
}

void CheckRoom2NPCs(Player *player)
{
    CheckNPC(player, &saco1);
    CheckNPC(player, &saco2);
    CheckNPC(player, &saco3);
    CheckNPC(player, &saco4);
    CheckNPC(player, &saco5);
    CheckNPC(player, &saco6);
    CheckNPC(player, &saco7);
    CheckNPC(player, &saco8);
    CheckNPC(player, &saco9);
    CheckNPC(player, &saco10);
}

void CheckNPC(Player *player, NPC *npc)
{
    if (npc->requiredItem == BAG && npc->status == true)
    {
        return;
    }

    if (Vector2Distance(player->position, npc->position) < 128)
    {

        DrawRectangle(npc->position.x - 17 + (REL_TILE_SIZE / 2), npc->position.y - 50, 32, 38, Fade(BLACK, 0.6f));
        DrawText("E", npc->position.x - 10 + (REL_TILE_SIZE / 2), npc->position.y - 45, 30, Fade(WHITE, 0.8f));

        if (IsKeyPressed(KEY_E) || isInteracting)
        {
            InteractNPC(npc, player);
        }
    }
}

void InteractNPC(NPC *npc, Player *player)
{
    char *necesidad;

    if (IsKeyPressed(KEY_E) && isInteracting)
    {
        isInteracting = false;
        return;
    }

    isInteracting = true;

    if (npc->status == false)
    {
        // Cambiar el texto dependiendo del item que se necesite
        switch (npc->requiredItem)
        {
        case FOOD:
            necesidad = "comida";
            break;
        case RIFLE:
            necesidad = "un rifle";
            break;
        case MACHETE:
            necesidad = "un machete";
            break;
        case LANZA:
            necesidad = "una lanza";
            break;
        case BAG:
            if (player->heldItem == LANZA || player->heldItem == MACHETE)
            {
                player->heldItem = NONE;
                npc->status = true;
            }

            isInteracting = false;
            return;
            break;
        case NONE:
            isInteracting = false;
            return;
            break;

        default:
            necesidad = "nada";
            break;
        }

        npc->dialogue = TextFormat("Necesito %s.", necesidad);

        if (player->heldItem == npc->requiredItem)
        {
            player->heldItem = NONE;
            npc->status = true;
            npc->dialogue = "Muchas gracias soldado =)";
        }
    }

    if (npc->requiredItem == BAG)
    {
        isInteracting = false;
        return;
    }

    isInteracting = true;
    currentDialogue = npc->dialogue;
    currentName = npc->name;
}
