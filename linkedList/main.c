/*
Author : Zeug555
Last Update : 14/11/23
Title : main.c
*/



#include <stdio.h>
#include <string.h>
#include "linkedList.h"

int main()
{
    /* --------------------------- Exemple ---------------------------*/

    //Head creation
    Data* header = (Data*)malloc(sizeof(Data));
    strcpy(header->data, "baguette");

    //LinkedList creation
    LinkedList* linkedlist = linkedListInit(header);
    linkedListPrint(linkedlist);

    return 0;
}