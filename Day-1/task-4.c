// Write a C program  that takes two float number as user input, multiply them and print the result
#include<stdio.h>
int main() {
    float num1, num2, product;

    printf("Enter two integer number: ");
    scanf("%f%f", &num1, &num2);

    // product = num1 * num2;

    // printf("Multiplication = %d\n", product);

    printf("Multiplication = %.2f\n", num1 * num2);

return 0;
}