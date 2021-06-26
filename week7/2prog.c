#include "2_1.h"

int main(){
    //intial start initialisation
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    head->value=-1;

    int flag=1;
    int choice;
    while(flag)
    {
        printf("--------------------\n");
        printf("1.Insert \n");
        printf("2.Delete \n");
        printf("3.Display \n");
        printf("4.Exit \n");
        printf("Enter your option :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int value,priority;
                printf("Enter value :");
                scanf("%d",&value);
                printf("Enter priority :");
                scanf("%d",&priority);
                nodeinsert(head,value,priority);
                break;
            }
            case 2:
            {
                nodedelete(head);
                break;
            }
            case 3:
            {
                nodedisplay(head);
                break;
            }
            case 4:
                flag =0;break;
            default:
                printf("Invalid option \n");
        }
    }
}