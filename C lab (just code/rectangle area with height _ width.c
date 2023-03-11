#include <stdio.h>

int main() {
    float height, width, area;

    printf("Enter height of rectangle: ");
    scanf("%f", &height);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    area = height * width;

    printf("Area of rectangle is: %.2f\n", area);

    return 0;
}
s
