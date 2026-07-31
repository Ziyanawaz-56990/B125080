#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int sum = 0;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}