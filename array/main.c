#include <stdio.h>
#include "array.h"

int main()
{
    //New Array Declaration
    printf("\n\n --- New Array Declaration --- \n");
    Array myArray = arrayInit(5,3);
    arrayPrint(myArray);

    //New Array Declaration fill with 2
    printf("\n\n --- New Array Declaration fill with 2 --- \n");
    Array myArray1 = arrayValueInit(3,5,2);
    arrayPrint(myArray1);

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
    printf("\n\n array1 \n");
    Array myArrayAdd = arrayInit(5,3);
    arrayModif(myArray, 1, 2, 3);
    arrayModif(myArray, 2, 1, 1);
    arrayModif(myArray, 1, 3, 4);
    arrayModif(myArray, 2, 2, 5);
    arrayModif(myArray, 0, 0, 3);
    arrayPrint(myArray);

    return 0;
}