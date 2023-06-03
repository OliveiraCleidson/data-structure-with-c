#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

typedef struct Payment
{
  char *paymentId;
  double amount;
} Payment;

void printPayment(void *data)
{
  Payment *payment = (Payment *)data;
  printf("Payment ID: %s\n", payment->paymentId);
  printf("Amount: %.2f\n", payment->amount);
  printf("---------------------------\n");
}

int main()
{
  LinkedList *paymentList = createLinkedList();

  // Criando alguns pagamentos de exemplo
  Payment *payment1 = (Payment *)malloc(sizeof(Payment));
  payment1->paymentId = "PAY001";
  payment1->amount = 100.0;
  append(paymentList, payment1);

  Payment *payment2 = (Payment *)malloc(sizeof(Payment));
  payment2->paymentId = "PAY002";
  payment2->amount = 50.0;
  append(paymentList, payment2);

  Payment *payment3 = (Payment *)malloc(sizeof(Payment));
  payment3->paymentId = "PAY003";
  payment3->amount = 75.0;
  append(paymentList, payment3);

  printf("Lista de Pagamentos:\n");
  printLinkedList(paymentList, printPayment);

  freeLinkedList(paymentList);

  return 0;
}
