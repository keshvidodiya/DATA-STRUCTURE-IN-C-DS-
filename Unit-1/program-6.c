#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[10],n,loc,value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the location:",n);
    scanf("%d",&loc);

   if(loc<0|| loc >n)
        {
            printf("location not found\n");
        }
    else
    {
        printf("Enter the value to insert: ");
        scanf("%d", &value);

           for(i=n; i>loc;i--)
        {
           a[i]=a[i-1];
        }
        a[loc]=value;
        n++;

        printf("Array after insertion:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
