#include "2_1.h"


void nodeinsert(struct node* head , int value , int priority)
{
    if(head->next==NULL) //if first element
    {
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->value=value;
        temp->priority=priority;
        head->next=temp;
        temp->next=NULL;
        return;
    }
    else{
        struct node* previous=head;
        struct node* current=head->next;
        while(current->next!=NULL) //adding elements in the middle
        {
            if(current->priority>priority)
            {

                struct node* temp=(struct node*)malloc(sizeof(struct node));
                temp->value=value;
                temp->priority=priority;
                previous->next=temp;
                temp->next=current;
                return;
            }
            else{
                previous=current;
                current=current->next;
            }
        }

        if(current->priority>priority) //if middle did not work adding in last or second last
        {
            struct node* temp=(struct node*)malloc(sizeof(struct node));
            temp->value=value;
            temp->priority=priority;
            previous->next=temp;
            temp->next=current;
            return;
        }
        else{
            struct node* temp=(struct node*)malloc(sizeof(struct node));
            temp->value=value;
            temp->priority=priority;
            current->next=temp;
            temp->next=NULL;
            return;
        }
    }
}
void nodedelete(struct node* head)
{
    if(head->next==NULL)
        printf("The node is empty!\n");
    else{
        struct node* deletednode=head->next;
        struct node* newtop=deletednode->next;
        head->next=newtop;
        printf("Deleted node with value:%d and priority:%d \n",deletednode->value,deletednode->priority);
    }
}

void nodedisplay(struct node* head)
{
    if(head->next==NULL)
    {
        if(head->value==-1)
            printf("Start of list->");
        else
            printf("%d  %d->",head->value,head->priority);

        printf("End of list! \n");
        return;
    }
    if(head->value==-1)
        printf("Start of list ->");
    else
        printf("%d %d->",head->value,head->priority);

    nodedisplay(head->next);
}