#include <stdio.h>
#include "linked_list.h"
#include <stdlib.h> //malloc/free/NULL

node_t* newNodeHelper(int data) {
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = data;
    newNode->next = NULL;
}

linked_list_t* createLinkedList() {
    linked_list_t* newList = (linked_list_t*)malloc(sizeof(linked_list_t));
    newList->head = NULL;
    newList->tail = NULL;
    return newList;
}

void appendToLinkedList(linked_list_t* list, int data) {
    node_t* newNode = newNodeHelper(data);
    if(list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        node_t* tail = list->tail;
        tail->next = newNode;
        list->tail = newNode;
        /*
        // Implementation without tail
        node_t* current_node = list->head;
        while(current_node->next != NULL) {
            current_node = current_node->next;
        }
        current_node->next = newNode;*/
    }
}

void printLinkedList(linked_list_t* list) {
    node_t* current_node = list->head;
    if(current_node == NULL) {
        puts("Empty Linked List");
    } else {
        while(current_node != NULL) {
            printf("data: %d\n", current_node->data);
            current_node = current_node->next;
        }
    }
}

void freeLinkedList(linked_list_t* list) {
    node_t* current_node = list->head;
    if(current_node == NULL) {
        free(list);
    } else {
        while(current_node != NULL) {
            node_t* next_node = current_node->next;
            free(current_node);
            current_node = next_node;
        }
        free(list);
    }
}
