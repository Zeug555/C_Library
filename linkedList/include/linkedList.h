#pragma once

typedef struct
{
    /* Data is a char for the exemple*/
    char data[40];
} Data;


typedef struct _LinkedList
{
    Data data;
    LinkedList* next;
} LinkedList;

void linkedListInsertion(LinkedList* linkedList, Data data);
