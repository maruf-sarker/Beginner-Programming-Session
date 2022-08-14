// Write a C program  that takes two double number as user input, divide them and print the result
#include<stdio.h>
int main() {
    double num1, num2, product;

    printf("Enter two integer number: ");
    scanf("%lf%lf", &num1, &num2);
    printf("Division = %.2lf\n", num1 / num2);

return 0;
}