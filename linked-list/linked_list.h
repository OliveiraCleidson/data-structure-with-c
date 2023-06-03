#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node
{
  void *data;
  struct Node *next;
} Node;

typedef struct LinkedList
{
  Node *head;
} LinkedList;

LinkedList *createLinkedList();
void append(LinkedList *list, void *data);
void printIntData(void *data);
void printFloatData(void *data);
void printLinkedList(LinkedList *list, void (*printData)(void *));
void freeLinkedList(LinkedList *list);

#endif /* LINKED_LIST_H */
