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
    int** array;
    int nbColumn;
    int nbLines;
}Array;

// Array Initialisation
Array arrayInit(int nbColumnIn, int nbLinesIn);
Array arrayValueInit(int nbColumnIn, int nbLinesIn, int valueIn);
Array arrayIdentityInit(int sizeIn);

void arrayPrint(Array arrayIn);

