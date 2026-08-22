#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
} *start1 = NULL,*start2 = NULL, *newnode;

void create_ll()
{
    struct node *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter value: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (start1 == NULL)
    {
        start1 = newnode;
    }
    else
    {
        temp = start1;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
        printf("\nlinklist 1 Node entered successfully!\n");
}
void display1()
{
    struct node *ptr;
    if (start1 == NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    for (ptr = start1; ptr != NULL; ptr = ptr->next)
    {
        printf("\n %d", ptr->data);
    }
}

void create_llsecond()
{
    struct node *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter value: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (start2 == NULL)
    {
        start2 = newnode;
    }
    else
    {
        temp = start2;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
        printf("\nlinklist 2 Node entered successfully!\n");
}
void display2()
{
    struct node *ptr;
    if (start2 == NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    for (ptr = start2; ptr != NULL; ptr = ptr->next)
    {
        printf("\n %d", ptr->data);
    }
}
void merge()
{
    struct node *ptr;
    ptr=start1;
    while(ptr -> next !=NULL)
    {
        ptr=ptr->next;

    }
    ptr->next=start2;
}
void display_merge()
{
    struct node *ptr;
    ptr = start1;

    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void main()
{
    int ch;

    while (1)
    {
        printf("\n1 create 1st linklist");
        printf("\n2 display 1st linklist");
        printf("\n3 create 2nd linklist");
        printf("\n4 display 2nd linklist");
        printf("\n5 display merged linklist");
        printf("\n6 exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create_ll();
            break;
        case 2:
            display1();
            break;
        case 3:
            create_llsecond();
            break;
        case 4:
            display2();
            break;
        case 5:
            merge();
            display_merge();
            break;
        case 6:
            exit(0);
        default:
            printf("wrong choice\n");
        }
    }
}