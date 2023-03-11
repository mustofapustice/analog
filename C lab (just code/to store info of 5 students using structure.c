#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter information for student %d:\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll number: ");
        scanf("%d", &s[i].rollNo);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    printf("Student Information:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].rollNo);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }

    return 0;
}

