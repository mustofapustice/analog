#include <stdio.h>

int gcd(int a, int b) {
    // Base case
    if (b == 0) {
        return a;
    }

    // Recursive case
    return gcd(b, a % b);
}

int main() {
    int a, b;

    // Get user input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate GCD
    int result = gcd(a, b);

    // Display result
    printf("GCD of %d and %d is %d", a, b, result);

    return 0;
}

