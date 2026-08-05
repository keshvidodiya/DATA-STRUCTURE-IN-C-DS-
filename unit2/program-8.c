#include <stdio.h>

int min, max;


void findMinMax(int arr[], int n)
{
    if (n == 0)
        return;

    if (arr[n - 1] < min)
        min = arr[n - 1];

    if (arr[n - 1] > max)
        max = arr[n - 1];

    findMinMax(arr, n - 1);
}

int main()
{
    int arr[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    findMinMax(arr, n);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
