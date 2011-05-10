/*
 *  materials.h
 *  
 */

#ifndef __MATERIALS_H__
#define __MATERIALS_H__

typedef enum {
	DEFAULT,
	DIRT,
	ALLDIRT,
	GRASS,
	LEAF,
	STONE,
	WOOD,
	SAND,
	BEDROCK,
	OBSIDIAN,
	GOLD,
	COW,
	DEER,
	SUICIDE,
	DIRT_ICON,
	STONE_ICON,
	WOOD_ICON,
	SAND_ICON,
	OBSIDIAN_ICON,
	LOGO
} R3Texture;

#include "strings.h"
#include "R3Chunk.h"

// Materials

/*static R3Material *default_material;
static R3Material *branch_material;
static R3Material *dirt_material;
static R3Material *grass_material;
static R3Material *leaf_material;
static R3Material *alldirt_material;
static R3Material *stone_material;

static R3Material *heart_material;
static R3Material *empty_heart_material;
static R3Material *cow_material;
static R3Material *deer_material;*/

void MakeMaterials(R3Material **materials);

#endif
