// Write a C program  that takes two integer number as user input and print them both.
#include<stdio.h>
int main() {
    int num1, num2;

    // printf("Enter 1st number: ");
    // scanf("%d", &num1);
    // printf("Enter 2nd number: ");
    // scanf("%d", &num2);

    printf("Enter two integer number: ");
    scanf("%d%d", &num1, &num2);

    printf("First Number = %d\n", num1);
    printf("Second Number = %d\n", num2);

return 0;
}