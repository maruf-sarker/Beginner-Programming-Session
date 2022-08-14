// Write a C program to find out area of a circle ( formula :  3.1416 * r * r  )
#include<stdio.h>

#define PI 3.1416
int main() {
    // float PI, r, area;
    float r;
    // PI = 3.1416;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    // calculation
    // area = PI * r * r;

    // printf("Area of the circle: %.2f\n", area);
    printf("Area of the circle: %.2f\n", PI * r * r);
return 0;
}