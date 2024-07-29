#include <stdio.h>
#define PI 3.1415
float radius, area;
// Function to calculate the area of a circle
float areaofcircle() {
    area= PI * radius * radius;
}

int main() {

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    areaofcircle();

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
