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

        printf("\n");
    }

    printf("\n%-15s %-25s %-10s\n", "Roll Number", "Name", "Marks");
    printf("------------------------------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%-15d %-25s %-10.2f\n",
               students[i].rollNumber,
               students[i].name,
               students[i].marks);
    }

    return 0;
}