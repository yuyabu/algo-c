#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  double item;
  struct node *left;
  struct node *right;
} Node;

// 節の生成
static Node *make_node(double x)
{
  Node *node = malloc(sizeof(Node));
  if (node != NULL) {
    node->item = x;
    node->left = NULL;
    node->right = NULL;
  }
  return node;
}

int main(){

    printf("test\n");
}