/*
Author : Zeug555
Last Update : 18/11/23
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
Array arrayHollowInit(int nbColumnIn, int nbLinesIn);

// Array Modification
void arrayModif(Array arrayIn, int column, int line, float data);

// Addition of Arrays
Array arrayAdd(Array array1,Array array2);

// Product of Arrays
Array arrayProduct(Array array1, Array array2);
Array arrayFloatProduct(Array arrayIn, float multiplicator);

// Array Flip
Array arrayFlip(Array arrayIn);

// Array Print
void arrayPrint(Array arrayIn);

// Array Remove
void arrayRemove(Array arrayIn);
