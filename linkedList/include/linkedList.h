/*
Author : Zeug555
Last Update : 14/11/23
Title : linkedList.h
*/

#pragma once
#include <stdio.h>
#include <stdlib.h>

/*The Data that we want to have into our linkedlist*/
typedef struct
{
    /* Data is a char* for the exemple*/
    char content[40];
} Data;

/*LinkedList structure*/
typedef struct _LinkedList 
{
    Data* data;
    struct _LinkedList* next;
} LinkedList;

// Start the LinkedList
LinkedList* linkedListInit(Data* headData);

// Insertion in the LinkedList
void linkedListInsert(LinkedList* linkedList, Data* dataIn);
void linkedListInsertTo(LinkedList* linkedList, Data* dataIn, int index);
void linkedListInsertHead(LinkedList** linkedListAdr, Data* dataIn);

// Modification in the LinkedList
void linkedListModify(LinkedList* linkedList, Data* dataIn, int index);
void linkedListModifyHead(LinkedList** linkedListAdr, Data* dataIn);

// Remove an element of the LinkedList
void linkedListRmvNode(LinkedList** linkedListAdr, int index);
void linkedListRmvAll(LinkedList** linkedListAdr);

// Return the size of the linkedList
int linkedListSize(LinkedList* linkedList);

/* --------------------------- CHANGE IT FOR YOUR APPLICATION ---------------------------*/

// Print the LinkedList
void linkedListPrint(LinkedList* linkedList);
void linkedListPrintIndex(LinkedList* linkedList, int index);
