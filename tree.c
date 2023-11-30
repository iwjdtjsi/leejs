#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node * left;
  struct node * right;
}node;

node * insert(node* a, int dat) {
  node * newnode = (node *)malloc(sizeof(node));
  newnode->data = dat;
  if(a->data > dat) {
    if(a->left == NULL) {
      a->left = newnode;
    }
    else
      insert(a->left, dat);
  }
  else if(a->data < dat) {
    if(a->right == NULL) {
      a->right = newnode;
  }
    else
      insert(a->right, dat);
  }
}

// void print(node * a) {
//   if(a->left != NULL) {
//     print(a->left);
//   }
//   printf("%d ", a->data);
//   if(a->right != NULL) {
//     print(a->right);
//   }
// }

void preorder(node * a) {
  printf("%d ", a->data);
  if(a->left != NULL) {
    preorder(a->left);
  }
  if(a->right != NULL) {
    preorder(a->right);
  }
}

// void order(node * a) {
//   if(a->left != NULL) {
//     order(a->left);
//   }
//   if(a->right != NULL) {
//     order(a->right);
//   }
//   printf("%d ", a->data);
// }
int main(void) {
  node * head;
  head = (node *)malloc(sizeof(node));
  int a;
  printf("기본키를 입력하시오 : ");
  scanf("%d", &a);
  head->data = a;
  while(1) {
    printf("값을 입력하시오(종료를 하고싶다면 0을 입력) : ");
    scanf("%d", &a);
    if(a == 0)
      break;
    insert(head, a);
  }
  preorder(head);
}
