#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data ; 
    struct node *next;
}Node;

int main(){
    Node *head = (Node *) malloc (sizeof(Node));
    head->data = 28;
    head->next = NULL;
    Node *node2 = (Node *) malloc (sizeof(Node));
    node2->data = 29;
    head->next = node2;
    node2->next = NULL;

    printf("%d ",head->data);
    printf("%d ",node2->data);
}