/*
Author : Zeug555
Last Update : 15/11/23
Title : array.c
*/

#include "array.h"

Array arrayInit(int nbColumnIn, int nbLinesIn)
{
    Array arrayOut;
    float** listColumn = (float**)malloc(nbLinesIn*sizeof(float*));
    if(listColumn==NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    arrayOut.nbColumn = nbColumnIn;
    arrayOut.nbLines = nbLinesIn;


    for(int i = 0; i<nbLinesIn; i++)
    {
        float* listLines = (float*)malloc(nbColumnIn*sizeof(float));
        if(listLines==NULL)                     
        {
            printf("Error! memory not allocated.");
            exit(0);
        }
        
        for(int j=0; j<nbColumnIn; j++)
        {
            listLines[j] = 0;
        }
        listColumn[i] = listLines;
    }

    arrayOut.array=listColumn;
    return arrayOut;
}

Array arrayValueInit(int nbColumnIn, int nbLinesIn, float valueIn)
{
    Array arrayOut;
    float** listColumn = (float**)malloc(nbLinesIn * sizeof(float*));
    if (listColumn == NULL)
    {
        printf("Error! Memory not allocated.");
        exit(0);
    }

    arrayOut.nbColumn = nbColumnIn;
    arrayOut.nbLines = nbLinesIn;

    for (int i = 0; i < nbLinesIn; i++)
    {
        float* listLines = (float*)malloc(nbColumnIn * sizeof(float));
        if (listLines == NULL)
        {
            printf("Error! Memory not allocated.");
            exit(0);
        }

        for (int j = 0; j < nbColumnIn; j++)
        {
            listLines[j] = valueIn;
        }
        listColumn[i] = listLines;
    }

    arrayOut.array = listColumn;
    return arrayOut;
}


Array arrayIdentityInit(int sizeIn)
{
    Array arrayOut;
    float** listColumn = (float**)malloc(sizeIn*sizeof(float*));

    arrayOut.nbColumn = sizeIn;
    arrayOut.nbLines = sizeIn;


    for(int i = 0; i<sizeIn; i++)
    {
        float* listLines = (float*)malloc(sizeIn*sizeof(float));
        if(listLines==NULL)                     
        {
            printf("Error! memory not allocated.");
            exit(0);
        }
        
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

Array arrayHollowInit(int nbColumnIn, int nbLinesIn)
{
    Array arrayOut;
    float** listColumn = (float**)malloc(nbLinesIn*sizeof(float*));
    if(listColumn==NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    arrayOut.nbColumn = nbColumnIn;
    arrayOut.nbLines = nbLinesIn;


    for(int i = 0; i<nbLinesIn; i++)
    {
        float* listLines = (float*)malloc(nbColumnIn*sizeof(float));
        if(listLines==NULL)                     
        {
            printf("Error! memory not allocated.");
            exit(0);
        }

        listColumn[i] = listLines;
    }

    arrayOut.array=listColumn;
    return arrayOut;
}

void arrayModif(Array arrayIn, int column, int line, float data)
{
    arrayIn.array[column][line] = data;
}

Array arrayAdd(Array array1,Array array2)
{
    if((array1.nbColumn==array2.nbColumn)&&(array1.nbLines==array2.nbLines))
    {
        Array arrayOut = arrayHollowInit(array1.nbColumn, array1.nbLines);

        for (int i = 0; i < array1.nbLines; i++)
        {
           for (int j = 0; j < array2.nbColumn; j++)
           {
                arrayOut.array[i][j] = array1.array[i][j]+ array2.array[i][j];
           }
        }
        return arrayOut;
    } 

    else
    {
        printf("Addition Error! The 2 arrays have not the same size.");
        exit(0);
    }
}

void arrayPrint(Array arrayIn)
{
    for(int i = 0; i<arrayIn.nbLines; i++)
    {
        for(int j=0; j<arrayIn.nbColumn; j++)
        {
            printf("%.2f ",arrayIn.array[i][j]);
        }
        printf("\n");
    }
}