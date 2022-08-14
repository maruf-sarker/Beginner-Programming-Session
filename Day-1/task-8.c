// Write a C program  to find out area of a triangle ( এটার ফর্মুলা দিলাম না, আপনি একটু কষ্ট করেন )
#include<stdio.h>
int main() {
    float base, height;

    printf("Enter base & height of the triangle: ");
    scanf("%f%f", &base, &height);

    printf("Triangle Area = %.2f\n",.5 * base * height);

return 0;
}