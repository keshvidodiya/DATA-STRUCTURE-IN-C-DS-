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
    struct Node*ptr;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("ENTER THE VALUE: ");
    scanf("%d",&newnode->data);
    printf("Enter after the value: ");
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
    struct Node*ptr;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("ENTER THE VALUE: ");
    scanf("%d",&newnode->data);
    printf("Enter after the value: ");
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
void delete_first_dl()
{
    struct Node *ptr;

    if (start == NULL)
    {
        printf("List is empty.\n");

    }

    ptr = start;
    start = start->next;
    start->prev=NULL;

    free(ptr);

    printf("First node deleted successfully.\n");
}
void delete_last_dl()
{
    struct Node *ptr;

    if (start == NULL)
    {
        printf("List is empty.\n");

    }

    ptr = start;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->prev->next=NULL;
    free(ptr);

    printf("Last node deleted successfully.\n");
}
void display()
{
    struct Node * ptr;

    for(ptr=start; ptr != NULL; ptr=ptr->next)
    {
        printf("   %d",ptr->data);
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
        printf("5. delete_first_dl\n");
        printf("6. delete_last_dl\n");
        printf("7. display\n");
        printf("8. exit\n");

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

            case 5: delete_first_dl();
                    break;

            case 6: delete_last_dl();
                    break;

            case 7: display();
                    break;

            case 8: exit(0);
                    break;
            default: printf("wrong choice");
        }
    }
    return 0;
}
