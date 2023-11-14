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

    while (currentNode->next != NULL) 
    {
            currentNode = currentNode->next;
    }
    currentNode->next = newNode;
    newNode->data = dataIn;
}

void linkedListInsertTo(LinkedList* linkedList, Data* dataIn, int index)
{
    LinkedList* newNode = (LinkedList*)malloc(sizeof(LinkedList));

    if(index != 0)
    {
        LinkedList* currentNode = linkedList;
        LinkedList* nextNode;

        for(int i=0; i<index-1; i++)
        {
                currentNode = currentNode->next;
        }
        nextNode = currentNode->next;
        currentNode->next = newNode;

        newNode->next = nextNode;
        newNode->data = dataIn;
    }
}

void linkedListInsertHead(LinkedList** linkedList, Data* dataIn)
{
    LinkedList* newNode = (LinkedList*)malloc(sizeof(LinkedList));
    newNode->data = dataIn;
    newNode->next = *linkedList;
    *linkedList = newNode;
}

int linkedListSize(LinkedList* linkedList)
{
    LinkedList* currentNode = linkedList;
    int size = 0;
    while(currentNode!= NULL)
    {
        size++;
        currentNode = currentNode->next;
    }
    return size;
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

void linkedListPrintIndex(LinkedList* linkedList, int index)
{
    LinkedList* currentNode = linkedList;

    for(int i = 0; i<index; i++)
    {
        currentNode = currentNode->next;
    }

    /*TO CHANGE IN TERM OF THE NATURE OF THE DATA*/
    printf("%d - %s\n", index,currentNode->data->content);

    /*-------------------------------------------*/ 
}