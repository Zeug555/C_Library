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

    // Head creation
    Data* header = (Data*)malloc(sizeof(Data));
    strcpy(header->content, "baguette");

    // LinkedList creation
    printf("\n--- List Init Test ---\n\n");
    LinkedList* linkedlist = linkedListInit(header);
    linkedListPrint(linkedlist);

    // Insert 10 elements linkedList
    printf("\n--- Test node insert ---\n\n");
    Data* shrek = (Data*)malloc(sizeof(Data));
    strcpy(shrek->content, "shrek");
    for(int i=0; i<10; i++)
        linkedListInsert(linkedlist, shrek);
    linkedListPrint(linkedlist);

    // Insert element at the 5 place linkedList
    printf("\n--- Test node insert the position 5 ---\n\n");
    Data* oui = (Data*)malloc(sizeof(Data));
    strcpy(oui->content, "oui");
    linkedListInsertTo(linkedlist, oui, 5);
    linkedListPrint(linkedlist);

    // Print the 5 element of the linkedList
    printf("\n--- Test Print by index ---\n\n");
    linkedListPrintIndex(linkedlist, 5);

    // HeadInsert of the linkedList
    printf("\n--- HeadInsertion Test ---\n\n");
    Data* non = (Data*)malloc(sizeof(Data));
    strcpy(non->content, "non");
    linkedListInsertHead(&linkedlist, non);
    linkedListPrint(linkedlist);

    // Modification of the 4th element of the list
    printf("\n--- 4th node modification ---\n\n");
    Data* patrick = (Data*)malloc(sizeof(Data));
    strcpy(patrick->content, "patrick");
    linkedListModify(linkedlist, patrick, 4);
    linkedListPrint(linkedlist);

    // Modification of the head of the list
    printf("\n--- Head modification ---\n\n");
    linkedListModifyHead(&linkedlist, patrick);
    linkedListPrint(linkedlist);

    // linkedListSize test
    printf("\n--- Size calculation test ---\n\n");
    int size = linkedListSize(linkedlist);
    printf("Size %d\n", size);

    return 0;
}