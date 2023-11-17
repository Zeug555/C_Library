/*
Author : Zeug555
Last Update : 15/11/23
Title : array.h
*/

#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct _Array
{
    float** array;
    int nbColumn;
    int nbLines;
}Array;

// Array Initialisation
Array arrayInit(int nbColumnIn, int nbLinesIn);
Array arrayValueInit(int nbColumnIn, int nbLinesIn, float valueIn); //Bug
Array arrayIdentityInit(int sizeIn);

// Array Modification
void arrayModif(Array arrayIn, int column, int line, float data);

void arrayPrint(Array arrayIn);

