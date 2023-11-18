/*
Author : Zeug555
Last Update : 17/11/23
Title : main.c
*/

#include <stdio.h>
#include "array.h"

int main()
{
    /* --------------------------- Exemple ---------------------------*/

    //New Array Declaration
    printf("\n\n --- New Array Declaration --- \n");
    Array myArray = arrayInit(5,3);
    arrayPrint(myArray);

    //New Array Declaration fill with 2
    printf("\n\n --- New Array Declaration fill with 2 --- \n");
    Array myArray2 = arrayValueInit(3,5,2);
    arrayPrint(myArray2);

    //New Identity Array (size 3)
    printf("\n\n --- New Identity Array (size 3) --- \n");
    Array identityArray = arrayIdentityInit(3);
    arrayPrint(identityArray);

    //Modification of myArray
    printf("\n\n --- Modification of myArray --- \n");
    arrayModif(myArray, 1, 2, 3);
    arrayModif(myArray, 2, 1, 1);
    arrayModif(myArray, 1, 3, 4);
    arrayModif(myArray, 2, 2, 5);
    arrayModif(myArray, 0, 0, 3);
    arrayPrint(myArray);

    //Addition of 2 Arrays
    printf("\n\n --- Addition of 2 Arrays --- \n");
    Array myArrayAdd = arrayInit(5,3);
    arrayModif(myArrayAdd, 1, 2, 1);
    arrayModif(myArrayAdd, 0, 4, -1);
    arrayModif(myArrayAdd, 2, 3, 4);
    arrayModif(myArrayAdd, 0, 2, 5);
    arrayModif(myArrayAdd, 0, 0, -3);
    printf("\n-array1-\n");
    arrayPrint(myArrayAdd);
    printf("\n-array2-\n");
    arrayPrint(myArray);
    printf("\n-Result-\n");
    arrayPrint(arrayAdd(myArrayAdd, myArray));

    //Product of 2 Arrays
    printf("\n\n --- Product of 2 Arrays --- \n");
    printf("\n-array1-\n");
    arrayPrint(myArray);
    printf("\n-array2-\n");
    arrayPrint(myArray2);
    printf("\n-Product-\n");
    arrayPrint(arrayProduct(myArray, myArray2));

    //Product with a float
    printf("\n\n --- Product with 0,5 of myArray2 --- \n");
    printf("\n-Original Array-\n");
    arrayPrint(myArray2);
    printf("\n-After Product-\n");
    arrayPrint(arrayFloatProduct(myArray2, 0.5));

    //Array Flip
    printf("\n\n --- Array Flip --- \n");
    printf("\n-Original Array-\n");
    arrayPrint(myArray);
    printf("\n-After Product-\n");
    arrayPrint(arrayFlip(myArray));

    //Remove the Array
    printf("\n\n --- Remove myArray --- \n");
    arrayRemove(myArray);

    printf("\n\n --- End --- \n");

    return 0;
}