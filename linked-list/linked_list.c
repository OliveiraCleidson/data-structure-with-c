#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

LinkedList *createLinkedList()
{
  LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
  list->head = NULL;
  return list;
}

void append(LinkedList *list, void *data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (list->head == NULL)
  {
    list->head = newNode;
  }
  else
  {
    Node *current = list->head;
    while (current->next != NULL)
    {
      current = current->next;
    }
    current->next = newNode;
  }
}

void printIntData(void *data)
{
  int *num = (int *)data;
  printf("%d ", *num);
}

void printFloatData(void *data)
{
  float *num = (float *)data;
  printf("%f ", *num);
}

void printLinkedList(LinkedList *list, void (*printData)(void *))
{
  Node *current = list->head;
  while (current != NULL)
  {
    printData(current->data);
    current = current->next;
  }
  printf("\n");
}

void freeLinkedList(LinkedList *list)
{
  Node *current = list->head;
  while (current != NULL)
  {
    Node *next = current->next;
    free(current);
    current = next;
  }
  free(list);
}
