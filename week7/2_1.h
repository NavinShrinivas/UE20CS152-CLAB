#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    int priority;
    struct node* next;
};

void nodeinsert(struct node* head , int value , int priority);
void nodedisplay(struct node* head);
void nodedelete(struct node* head);