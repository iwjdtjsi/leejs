#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char name[10];
  int data;
  struct node *next;
}node;


int top = 0;
void insert(node * head) {
  node *newnode = (node *)malloc(sizeof(node));
  newnode->next = NULL;
  if(top == 0) {
    printf("�̸��� �����ÿ� : ");
    scanf("%s", head->name);
    printf("�й��� �����ÿ� : ");
    scanf("%d", &head->data);
    top++;
  }
  else {
    while(head->next != NULL) {
      head = head->next;
    }
    printf("�̸��� �����ÿ� : ");
    scanf("%s", newnode->name);
    printf("�й��� �����ÿ� : ");
    scanf("%d", &newnode->data);
    head->next = newnode;
  }
}

void print(node * head) {
  while(head->next != NULL) {
    printf("%s ", head->name);
    printf("%d\n", head->data);
    head = head->next;
  }
  printf("%s ", head->name);
  printf("%d\n", head->data);
}

int size_head(node * head) {
  int size = 1;
  while(head->next != NULL) {
    head = head->next;
    size++;
  }
}

void last_print(node * head) {
  if(head->next != NULL) {
    last_print(head->next);
  }
  printf("%d\n", head->data);
}

int main(void) {
  node *head = (node *)malloc(sizeof(node));
  int option;
  int a;
  while(1) {
    printf("1. �л� ���� �߰� 2. �л� ���� ��� ");
    scanf("%d", &option);
    if(option == 1) {
      insert(head);
      print(head);
    }
    if(option == 2) {
      print(head);
    }
    if(option == 3) {
      last_print(head);
    }
  }
}
