#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int largest, smallest;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    largest = arr[0];
    smallest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    average = sum / n;

    printf("\nLargest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    printf("Average = %.2f\n", average);

    return 0;
}