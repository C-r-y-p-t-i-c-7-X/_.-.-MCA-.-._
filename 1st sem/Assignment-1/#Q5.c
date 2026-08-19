// 5. Input the radius and calculate the perimeter and area of the circle.

#include <stdio.h>
pi = 3.14;

int main() {

    float area, perimeter, radius;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * pi * radius;
    area = pi * radius * radius;
    

    printf("Perimeter: %.2f\n", perimeter);
    printf("Area     : %.2f\n", area);
    return 0;
}
