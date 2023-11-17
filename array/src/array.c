/*
Author : Zeug555
Last Update : 15/11/23
Title : array.c
*/

#include "array.h"

Array arrayInit(int nbColumnIn, int nbLinesIn)
{
    Array arrayOut;
    int** listColumn = (int**)malloc(nbColumnIn*sizeof(int*));

    arrayOut.nbColumn = nbColumnIn;
    arrayOut.nbLines = nbLinesIn;


    for(int i = 0; i<nbLinesIn; i++)
    {
        int* listLines = (int*)malloc(nbColumnIn*sizeof(int));
        for(int j=0; j<nbColumnIn; j++)
        {
            listLines[j] = 0;
        }
        listColumn[i] = listLines;
    }

    arrayOut.array=listColumn;
    return arrayOut;
}

Array arrayValueInit(int nbColumnIn, int nbLinesIn, int valueIn)
{
    Array arrayOut;
    int** listColumn = (int**)malloc(nbColumnIn*sizeof(int*));

    arrayOut.nbColumn = nbColumnIn;
    arrayOut.nbLines = nbLinesIn;


    for(int i = 0; i<nbLinesIn; i++)
    {
        int* listLines = (int*)malloc(nbColumnIn*sizeof(int));
        for(int j=0; j<nbColumnIn; j++)
        {
            listLines[j] = valueIn;
        }
        listColumn[i] = listLines;
    }

    arrayOut.array=listColumn;
    return arrayOut;
}

Array arrayIdentityInit(int sizeIn)
{
    Array arrayOut;
    int** listColumn = (int**)malloc(sizeIn*sizeof(int*));

    arrayOut.nbColumn = sizeIn;
    arrayOut.nbLines = sizeIn;


    for(int i = 0; i<sizeIn; i++)
    {
        int* listLines = (int*)malloc(sizeIn*sizeof(int));
        for(int j=0; j<sizeIn; j++)
        {
            if(i!=j) 
                listLines[j] = 0;
            else
                listLines[j] = 1;
        }
        listColumn[i] = listLines;
    }

    arrayOut.array=listColumn;
    return arrayOut;
}

void arrayPrint(Array arrayIn)
{
    for(int i = 0; i<arrayIn.nbLines; i++)
    {
        for(int j=0; j<arrayIn.nbColumn; j++)
        {
            printf("%d ",arrayIn.array[i][j]);
        }
        printf("\n");
    }
}