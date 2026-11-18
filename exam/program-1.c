#include<stdio.h>
#define MAX 10
int stack[10];
int top=-1;

void push()
    {
        int val;
        if(top==MAX-1)
        {
            printf("\nstack overflow! cannot insert element.\n");
        }
        else
        {
            printf("enter element to push:");
            scanf("%d",&val);
            top++;
            stack[top]=val;
            printf("inserted successfully\n");
        }
}
void pop()
{
    if(top==-1)
    {
        printf("the stack is underflow\n");
    }
    else
    {
        printf("the element form stack is deleted",stack[top]);
        top--;
    }
}
void peek()
    {
        if(top==-1)
        {
            printf("stack is empty");
        }
        else
        {
            printf("top most element is%d",stack[top]);
            top--;
        }
    }
void display()
{
    int i;
    if(top==-1)
    {
        printf("\n stack is empty.");
    }
    else

        printf("\n stack element are:");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
}
 void main()
   {
       int choice;
       while(1)
       {
           printf("\n--STACK MENU--\n");
           printf("1.PUSH\n");
           printf("2.POP\n");
           printf("3.PEEK\n");
           printf("4.DISPLAY\n");
           printf("5.EXIT\n");

           printf("enter your choice:");
           scanf("%d",&choice);

           switch(choice)
        {


            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("program terminated \n");
                exit(0);
                default:
               printf("invalid choice! please enter valid option \n");
        }
       }
}



