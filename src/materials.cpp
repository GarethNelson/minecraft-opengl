/*
 *  materials.cpp
 *
 */

#include "materials.h"

void MakeMaterials(R3Material **materials) 
{
	printf("make materials\n");
	  //Load materials
	 R3Material *default_material = new R3Material();
	 default_material->ka = R3Rgb(0.2, 0.2, 0.2, 1);
	 default_material->kd = R3Rgb(0.5, 0.5, 0.5, 1);
	 default_material->ks = R3Rgb(0.5, 0.5, 0.5, 1);
	 default_material->kt = R3Rgb(0.0, 0.0, 0.0, 1);
	 default_material->emission = R3Rgb(0, 0, 0, 1);
	 default_material->shininess = 10;
	 default_material->indexofrefraction = 1;
	 default_material->texture = NULL;
	 default_material->id = 0;
	materials[DEFAULT] = default_material;
	 
	R3Material * alldirt_material = new R3Material();
	 alldirt_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
	 alldirt_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
	 alldirt_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
	 alldirt_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
	 alldirt_material->emission = R3Rgb(0, 0, 0, 0);
	 alldirt_material->shininess = 10;
	 alldirt_material->indexofrefraction = 1;
	 
	 // Read texture image
	 alldirt_material->texture = new R2Image();
	 if (!alldirt_material->texture->Read(s_TexAllDirt)) {
	 fprintf(stderr, "Unable to read texture from file");
	 //	return 0;
	 }	

	 alldirt_material->id = 5;
     materials[ALLDIRT] = alldirt_material;
	 
	 R3Material *dirt_material = new R3Material();
	 dirt_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
	 dirt_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
	 dirt_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
	 dirt_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
	 dirt_material->emission = R3Rgb(0, 0, 0, 0);
	 dirt_material->shininess = 10;
	 dirt_material->indexofrefraction = 1;
	 
	 // Read texture image
	 dirt_material->texture = new R2Image();
	 if (!dirt_material->texture->Read(s_TexDirt)) {
	 fprintf(stderr, "Unable to read texture from file");
	 //	return 0;
	 }	
	 dirt_material->id = 2;
     materials[DIRT] = dirt_material;
	 
	 R3Material *branch_material = new R3Material();
	 branch_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
	 branch_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
	 branch_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
	 branch_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
	 branch_material->emission = R3Rgb(0, 0, 0, 0);
	 branch_material->shininess = 10;
	 branch_material->indexofrefraction = 1;
	 
	 // Read texture image
	 branch_material->texture = new R2Image();
	 if (!branch_material->texture->Read(s_TexBranch)) {
	 fprintf(stderr, "Unable to read texture from file");
	 //	return 0;
	 }	
	 //branch_material->texture = NULL;
	 branch_material->id = 1;
     materials[BRANCH] = branch_material; 
	
	 R3Material *grass_material = new R3Material();
	 grass_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
	 grass_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
	 grass_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
	 grass_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
	 grass_material->emission = R3Rgb(0, 0, 0, 0);
	 grass_material->shininess = 10;
	 grass_material->indexofrefraction = 1;
	 
	 // Read texture image
	 grass_material->texture = new R2Image();
	 if (!grass_material->texture->Read(s_TexGrass)) {
	 fprintf(stderr, "Unable to read texture from file");
	 //	return 0;
	 }	
	 grass_material->id = 3;
     materials[GRASS] = grass_material; 
	
	 R3Material *leaf_material = new R3Material();
	 leaf_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
	 leaf_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
	 leaf_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
	 leaf_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
	 leaf_material->emission = R3Rgb(0, 0, 0, 0);
	 leaf_material->shininess = 10;
	 leaf_material->indexofrefraction = 1;
	 
	 // Read texture image
	 leaf_material->texture = new R2Image();
	 if (!leaf_material->texture->Read(s_TexLeaf)) {
	 fprintf(stderr, "Unable to read texture from file");
	 //	return 0;
	 }	
	 leaf_material->id = 4;
     materials[LEAF] = leaf_material; 
	
	 R3Material *stone_material = new R3Material();
	 stone_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
	 stone_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
	 stone_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
	 stone_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
	 stone_material->emission = R3Rgb(0, 0, 0, 0);
	 stone_material->shininess = 10;
	 stone_material->indexofrefraction = 1;
	 
	 // Read texture image
	 stone_material->texture = new R2Image();
	 if (!stone_material->texture->Read(s_TexStone)) {
	 fprintf(stderr, "Unable to read texture from file");
	 //	return 0;
	 }	
	 stone_material->id = 5;
     materials[STONE] = stone_material;
	
  /*  heart_material = new R3Material();
    heart_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
    heart_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
    heart_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
    heart_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
    heart_material->emission = R3Rgb(0, 0, 0, 0);
    heart_material->shininess = 10;
    heart_material->indexofrefraction = 1;
	
    // Read texture image
    heart_material->texture = new R2Image();
    if (!heart_material->texture->Read(s_TexHeart)) {
        fprintf(stderr, "Unable to read texture from file");
        //	return 0;
    }	
    heart_material->id = 9;
	
    empty_heart_material = new R3Material();
    empty_heart_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
    empty_heart_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
    empty_heart_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
    empty_heart_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
    empty_heart_material->emission = R3Rgb(0, 0, 0, 0);
    empty_heart_material->shininess = 10;
    empty_heart_material->indexofrefraction = 1;
	
    // Read texture image
    empty_heart_material->texture = new R2Image();
    if (!empty_heart_material->texture->Read(s_TexEmptyHeart)) {
        fprintf(stderr, "Unable to read texture from file");
        //	return 0;
    }	
    empty_heart_material->id = 10;*/
	
	R3Material *cow_material = new R3Material();
    cow_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
    cow_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
    cow_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
    cow_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
    cow_material->emission = R3Rgb(0, 0, 0, 0);
	cow_material->shininess = 10;
	cow_material->indexofrefraction = 1;
	
	// Read texture image
	cow_material->texture = new R2Image();
	if (!cow_material->texture->Read(s_TexCow)) {
		fprintf(stderr, "Unable to read texture from file");
	}	
	cow_material->id = 30;
	materials[COW] = cow_material;
	
	R3Material *deer_material = new R3Material();
	deer_material->ka = R3Rgb(0.0, 0.0, 0.0, 0.0);
	deer_material->kd = R3Rgb(0.5, 0.5, 0.5,0.0);
	deer_material->ks = R3Rgb(0.5, 0.5, 0.5,0.0);
	deer_material->kt = R3Rgb(0.0, 0.0, 0.0,0.0);
	deer_material->emission = R3Rgb(0, 0, 0, 0);
	deer_material->shininess = 10;
	deer_material->indexofrefraction = 1;
	
	// Read texture image
	deer_material->texture = new R2Image();
	if (!deer_material->texture->Read(s_TexDeer)) {
		fprintf(stderr, "Unable to read texture from file");
	}	
	deer_material->id = 31;
	materials[DEER] = deer_material;
}