#include<stdio.h>
 int main()
 {
    int a[10] ,i,s;
    printf("Enter 10 values");

    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("10 values are\n");
        for(i=0;i<=9;i++)
        {
            printf("%d\n",a[i]);
        }
        printf("Enter the value want to search\n");
        scanf("%d",&s);
        for(i=0;i<=9;i++)
        {
            if(s==a[i])
            {
                break;
            }
        }
        if(i==10)
        {
            printf("value not found");
        }
        else
        {
            printf("value found at location %d",i);
        }
        return 0;
 }

