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
    strcpy(header->content, "baguette");

    //LinkedList creation
    printf("\n--- List Init Test ---\n\n");
    LinkedList* linkedlist = linkedListInit(header);
    linkedListPrint(linkedlist);

    //Insert 10 elements linkedList
    printf("\n--- Test node insert ---\n\n");
    Data* shrek = (Data*)malloc(sizeof(Data));
    strcpy(shrek->content, "shrek");
    for(int i=0; i<10; i++)
        linkedListInsert(linkedlist, shrek);
    linkedListPrint(linkedlist);

    return 0;
}