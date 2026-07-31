#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    int n, i;
    int highestIndex = 0;
    struct Student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nEnter details of %d students:\n\n", n);

    for (i = 0; i < n; i++)
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

    for (i = 1; i < n; i++)
    {
        if (students[i].marks > students[highestIndex].marks)
        {
            highestIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("-----------------------------\n");
    printf("Roll Number: %d\n", students[highestIndex].rollNumber);
    printf("Name: %s\n", students[highestIndex].name);
    printf("Marks: %.2f\n", students[highestIndex].marks);

    free(students);

    return 0;
}