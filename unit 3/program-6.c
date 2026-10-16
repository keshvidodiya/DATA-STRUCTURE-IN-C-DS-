#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}*start,*newnode;

void insert_begin_dll()
{
    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("enter value : ");
    scanf("%d",&newnode->data);

    newnode->prev=NULL;
    newnode->next=start;

    if(start!=NULL)
    {
        start->prev=newnode;
    }
    start=newnode;
}
void insert_end_dll()
{
    struct Node *ptr;
    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the value: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    ptr = start;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = newnode;
    newnode->prev = ptr;
}
void display()
{
    struct Node * ptr;
    for(ptr=start;ptr!=NULL;ptr=ptr->next)
    {
        printf(" %d ",ptr->data);
    }
    printf("\n");
}

void main()
{
    start=NULL;
    int ch;

    while(1)
    {
        printf("1. insert at beginning\n");
        printf("2. insert at end\n");
        printf("3. display\n");
        printf("4. exit\n");

        printf("enter your choice : ");
        scanf("\n%d",&ch);

      switch(ch)
{
    case 1:
        insert_begin_dll();
        break;

    case 2:
        insert_end_dll();
        break;

    case 3:
        display();
        break;

    case 4:
        exit(0);

    default:
        printf("wrong choice");
}
    }

    return 0;
}
