#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "raylib.h"
#include "raymath.h"
#include "string.h"

typedef struct GraphicsData
{
    Image image;
    Texture2D texture;
    Rectangle size;
} GraphicsData;

#define TILE_SIZE 16

/* PROTOTIPOS*/

// Inicializa los datos de la textura
void InitGraphics(GraphicsData *tileset);

/*
    #### LISTA DE ELEMENTOS
    - "ROOM"
*/
void DrawElement(GraphicsData *tileset, char *element, Vector2 position, float scale);
void DrawRoom(GraphicsData *tileset, Vector2 position, float scale);

// Libera los datos de la textura
void UnloadGraphics(GraphicsData *tileset);

#endif