// Write a C program  to find out area of a square ( formula :   a * a )
#include<stdio.h>
int main() {
    // a^2 = a * a
    // int side, area;
    int side;
    printf("Enter one side of the square: ");
    scanf("%d", &side);

    // area = side * side;

    printf("Area of the square: %d\n", side * side);

return 0;
}