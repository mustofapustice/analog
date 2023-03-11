#include <stdio.h>

int main() {
    char name[100];
    int roll;

    // Get user input
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your roll number: ");
    scanf("%d", &roll);

    // Create file and write to it
    FILE *file = fopen("test.txt", "w");
    fprintf(file, "Name: %s\nRoll: %d", name, roll);
    fclose(file);

    printf("Data written to file successfully!");

    return 0;
}

