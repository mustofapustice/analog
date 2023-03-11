#include <stdio.h>

void findBiggest(int *a, int *b, int *c, int *result);

int main() {
    int a, b, c, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    findBiggest(&a, &b, &c, &result);

    printf("The biggest number is: %d\n", result);

    return 0;
}

void findBiggest(int *a, int *b, int *c, int *result) {
    *result = *a;

    if (*b > *result) {
        *result = *b;
    }

    if (*c > *result) {
        *result = *c;
    }
}

