#include<stdio.h>

int main()
{
    int a[10],i,j,pos,temp,n=10;

    printf("\n Enter 10 elements: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
  printf("\n array after ascending : ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
