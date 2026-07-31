#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    struct Student student;
    struct Student *ptr;

    ptr = &student;

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->rollNumber);

    printf("Enter Name: ");
    scanf(" %[^\n]", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details\n");
    printf("-------------------------\n");
    printf("Roll Number: %d\n", ptr->rollNumber);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}