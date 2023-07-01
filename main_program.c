#include <stdio.h>
#include "linked_list.c"

int main() {
    linked_list_t* list = createLinkedList();

    appendToLinkedList(list, 1);
    appendToLinkedList(list, 2);
    appendToLinkedList(list, 5);
    appendToLinkedList(list, 7);
    appendToLinkedList(list, 17);
    appendToLinkedList(list, 27);

    printLinkedList(list);

    freeLinkedList(list);

    return 0;
}
