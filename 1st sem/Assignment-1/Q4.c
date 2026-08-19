//Input length breadth, height, of a cube and find it's surface area & volume


#include <stdio.h>

int main() {
    float length, breadth, height;
    float surface_area, volume;

    printf("Enter length, breadth, and height: ");
    scanf("%f %f %f", &length, &breadth, &height);

    surface_area = 2 * (length * breadth + breadth * height + height * length);
    volume = length * breadth * height;

    printf("Surface Area : %.2f\n", surface_area);
    printf("Volume       : %.2f\n", volume);

    return 0;
}


