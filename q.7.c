#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[5];
    int i;
    int highestIndex = 0;
    float sum = 0;
    float average;

    printf("Enter details of 5 students:\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        sum = sum + students[i].marks;

        printf("\n");
    }

    for (i = 1; i < 5; i++)
    {
        if (students[i].marks > students[highestIndex].marks)
        {
            highestIndex = i;
        }
    }

    average = sum / 5;

    printf("\nStudent with highest marks:\n");
    printf("Roll Number: %d\n", students[highestIndex].rollNumber);
    printf("Name: %s\n", students[highestIndex].name);
    printf("Marks: %.2f\n", students[highestIndex].marks);

    printf("\nAverage marks of the class = %.2f\n", average);

    return 0;
}