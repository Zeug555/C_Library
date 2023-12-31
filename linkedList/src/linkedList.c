/*
Author : Zeug555
Last Update : 14/11/23
Title : linkedList.c
*/

#include "linkedList.h"

// Start the LinkedList

LinkedList* linkedListInit(Data* headData)
{
    LinkedList* linkedList = (LinkedList*)malloc(sizeof(LinkedList));
    linkedList->data = headData;

    linkedList->next = NULL;

    return linkedList;
}

// Insertion in the LinkedList

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

// Modification in the LinkedList

void linkedListModify(LinkedList* linkedList, Data* dataIn, int index)
{
    if(index != 0)
    {
        LinkedList* currentNode = linkedList;
        for(int i = 0; i<index; i++)
        {
            currentNode = currentNode->next;
        }
        currentNode->data = dataIn;
    }
}

void linkedListModifyHead(LinkedList** linkedListAdr, Data* dataIn)
{
    (*linkedListAdr)->data = dataIn;
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

// Remove an element of the LinkedList

void linkedListRmvNode(LinkedList** linkedList, int index) 
{
    if (index == 0) 
    {
        LinkedList* temp = *linkedList;
        *linkedList = temp->next;
        free(temp);
        return;
    }

    LinkedList* currentNode = *linkedList;
    for (int i = 0; i < index - 1; i++) 
    {
        if (currentNode == NULL || currentNode->next == NULL) 
        {
            printf("Error: Index out of bounds\n");
            return;
        }
        currentNode = currentNode->next;
    }

    if (currentNode->next == NULL) 
    {
        printf("Error: Index out of bounds\n");
        return;
    }

    LinkedList* temp = currentNode->next;
    currentNode->next = currentNode->next->next;
    free(temp);
}

// Return the size of the linkedList

void linkedListRmvAll(LinkedList** linkedList) 
{
    LinkedList* current = *linkedList;
    LinkedList* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *linkedList = NULL;
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