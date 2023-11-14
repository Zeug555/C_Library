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

void linkedListInsert(LinkedList* linkedList, Data* dataIn)
{
    LinkedList* newNode = (LinkedList*)malloc(sizeof(LinkedList));
    LinkedList* currentNode = linkedList;
    
    while (currentNode->next != NULL) {
            currentNode = currentNode->next;
    }
    currentNode->next = newNode;
    newNode->data = dataIn;
}

/* --------------------------- CHANGE IT FOR YOUR APPLICATION ---------------------------*/

void linkedListPrint(LinkedList* linkedList)
{
    LinkedList* currentNode = linkedList;
    int index = 0;

    while(currentNode != NULL)
    {
        /*TO CHANGE IN TERM OF THE NATURE OF THE DATA*/
        printf("%d - %s\n", index,currentNode->data->content);

        /*-------------------------------------------*/
        index++;
        currentNode = currentNode->next;
    }
}