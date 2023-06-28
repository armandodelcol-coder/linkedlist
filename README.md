# Repository Description

This repository is a source code of linked list implementation avoinding memory leaks (verified by **valgrind**).

## How to execute this program

This program, is a basic C program. If you want to clone and execute in you local environment, is necessary to have a compiler to C language, in my case i use the **gcc** compiler.

So, I created a minimal makefile to run the compiler command, run the program and clean the binary executable. Just run the command `make all`is enough to compile, execute and clean. *Remember, I, use this in Linux SO*.

## Linked List

Linked List is a data structure that compose (in a basically implementation) a node called *head*.

The head is a pointer to another data structure (node) that compose a data (primitive data or more strucutred data) and a **next** pointer to another *node* or *NULL*.

## C implementation

In C implementation, we need to create a linked list with a memory allocation (of linked list and nodes), because we want to persist this structure in memory, until we free.
