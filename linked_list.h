#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node
{
    int data;
    struct node* next;
}node_t;


typedef struct linked_list
{
    node_t* head;
    node_t* tail;
}linked_list_t;

linked_list_t* createLinkedList();

void printLinkedList(linked_list_t* list);

void freeLinkedList(linked_list_t* list);

void appendToLinkedList(linked_list_t* list, int data);


#endif
