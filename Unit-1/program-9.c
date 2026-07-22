#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[10],loc,value;

    printf("enter 10 value:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the location:");
    scanf("%d",&loc);

   if(loc<0|| loc >9)
        {
            printf("location not found\n");
        }
    else
    {
        for(i=loc;i<=9;i++)
        {
            a[i]=a[i+1];
        }
        printf("location found\n");
    }
    printf("array after deleting\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
return 0;
}
