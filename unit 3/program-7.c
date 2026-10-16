#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node*prev;
    struct Node *next;
}*start,*newnode;


void insert_begin_dl()
{

    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("enter value:");
    scanf("%d",&newnode->data);

    newnode->prev=NULL;
    newnode->next=start;

    if(start!=NULL)
    {
        start->prev=newnode;
    }
    start=newnode;
}


void insert_end_dl()
{
    struct Node*ptr,prev;
    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("enter value:");
    scanf("%d",&newnode->data);

    newnode->next=NULL;
    ptr=start;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->prev=ptr;

}
void insert_after_dl()
{
    int num;
    struct Node*ptr,prev;

    newnode=(struct Node*)malloc(sizeof(struct Node));

    printf("enter value:");
    scanf("%d",&newnode->data);

    printf("enter after the value:");
    scanf("%d",&num);

    ptr=start;

    while(ptr->data!=num)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr->next;
    newnode->prev=ptr;

    ptr->next=newnode;
    ptr->next->prev=newnode;
}
void insert_before_dl()
{
    int num;
    struct Node*ptr,prev;

    newnode=(struct Node*)malloc(sizeof(struct Node));

    printf("enter value:");
    scanf("%d",&newnode->data);

    printf("enter after the value:");
    scanf("%d",&num);

    ptr=start;

    while(ptr->data!=num)
    {
        ptr=ptr->next;
    }
    newnode->next=ptr;
    newnode->prev=ptr->prev;

    ptr->prev->next=newnode;
    ptr->prev=newnode;
}
void display()
{
    struct Node * ptr;

    for(ptr=start; ptr != NULL; ptr=ptr->next)
    {
        printf("  %d",ptr->data);
    }
    printf("\n");
}
void main()
{
    start=NULL;
    int ch;
    while(1)
    {
        printf("1. insert_begin_dl\n");
        printf("2. insert_end_dl\n");
        printf("3. insert_after_dl\n");
        printf("4. insert_before_dl\n");
        printf("5. display\n");
        printf("6. exit\n");

        printf("enter your choice:");
        scanf("\n %d",&ch);
        switch(ch)
        {
            case 1: insert_begin_dl();
                    break;

            case 2: insert_end_dl();
                    break;

            case 3: insert_after_dl();
                    break;

            case 4: insert_before_dl();
                    break;

            case 5: display();
                    break;

            case 6: exit(0);
                    break;
            default: printf("wrong choice");
        }
    }
    return 0;
}
