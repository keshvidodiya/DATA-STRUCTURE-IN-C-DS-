#include <stdio.h>
#define MAX 10
int queue[MAX-1];
int front=-1,rare=-1;
void insert()
{
    int number;
    if(rare==MAX-1)
    {
        printf("the queue is over flow:");
    }
    else
    {
        if(front==-1)
        front=0;
        printf("enter the value",number);
        scanf("%d",&number);
        rare++;
        queue[MAX]=number;
        printf("elements entered successfully \n");
    }
}
void delete()
{
    int number;
    if (front==-1||front>rare)
    {
        printf("the queue is underflow\n");
    }
    else
    {
        printf("delete element = %d\n",queue[front]);
        front++;

        if(front>rare)
        {
            front=front+1;
        }
    }
}
void display()
{
    int i;

    if(front==-1)
    {
        printf("\n queue is empty.\n");
    }
    else
    {
        printf("\n queue elements are:\n");

        for(i=front;i<=rare;i++);
        {
            printf("%d\n",queue[i]);
        }
    }

}

void main()
{
    int choice;
    while(1)
    {
        printf("\n------------------Queue MENU--------------------\n");
        printf("1. insert\n");
        printf("2.delete\n");
        printf("3.DISPLAY\n");
        printf("4. EXIT\n");

        printf("enter of your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
              case 1:
               insert();
                break;
            case 2:
               delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("program terminated.\n");
                exit(0);
            default:
            printf("invalid choice! please enter 3 valid options\n");
        }
    }
    while(choice!=4)
    return 0;

}











