/*
Author : Zeug555
Last Update : 14/11/23
Title : linkedList.c
*/

#include "linkedList.h"

LinkedList* linkedListInit(Data* headData)
{
    LinkedList* linkedList = (LinkedList*)malloc(sizeof(LinkedList));
    linkedList->data = headData;

    linkedList->next = NULL;

    return linkedList;
}

/* --------------------------- CHANGE IT FOR YOUR APPLICATION ---------------------------*/

void linkedListPrint(LinkedList* linkedList)
{
    LinkedList* currentNode = linkedList;
    int index = 0;
    do
    {
        /*TO CHANGE IN TERM OF THE NATURE OF THE DATA*/

        printf("%d - %s\n", index,currentNode->data->data);

        /*-------------------------------------------*/
        
        index++;
        currentNode = currentNode->next;
    }while(currentNode != NULL);
}

void linkedListInsert(linkedList* linkedList, Data* dataIn)
{
    
}