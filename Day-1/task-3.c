// Write a C program  that takes two integer number as user input, subtract them and print the result
#include<stdio.h>
int main() {
    int num1, num2, subtract;

    printf("Enter two integer number: ");
    scanf("%d%d", &num1, &num2);

    // subtract = num1 - num2;

    // printf("Subtract = %d\n", subtract);

    printf("Subtract = %d\n", num1 - num2);

return 0;
}