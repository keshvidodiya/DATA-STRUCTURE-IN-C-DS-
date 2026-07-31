#include<stdio.h>
int stack[10];
int top=-1;
void push(int b)
{
    top++;
    stack[top]=b;
}
int pop()
{
    int v;
    v=stack[top];
    top--;
    return v;
}

void main()
{
    int b,p,mul,val,i;

    printf("enter base value :");
    scanf("%d",&b);
    printf("enter power value :");
    scanf("%d",&p);

    for (i=1;i<=p;i++)
    {
        push (b);
    }
    mul = 1;
    for(i=1;i<=p;i++)
    {
        val=pop();
        mul=mul*val;
    }
    printf("ans of this is : %d\n ",mul);
    return 0;
}
