#include <stdio.h>
#include "array.h"

int main()
{
    //New Array Declaration
    printf("\n\n --- New Array Declaration --- \n");
    Array myArray = arrayInit(5,3);
    arrayPrint(myArray);

    //New Array Declaration fill with 1
    printf("\n\n --- New Array Declaration fill with 1 --- \n");
    Array myArray1 = arrayValueInit(3,6,1);
    arrayPrint(myArray1);

    //New Identity Array (size 3)
    printf("\n\n --- New Identity Array (size 3) --- \n");
    Array identityArray = arrayIdentityInit(3);
    arrayPrint(identityArray);
}