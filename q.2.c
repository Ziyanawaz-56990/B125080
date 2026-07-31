#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}