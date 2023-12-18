// program to print sum and difference of two number
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2;
    printf("\nEnter 1st number ");
    scanf("%d", &num1);
    printf("\nEnter 2nd number ");
    scanf("%d", &num2);
    printf("\nSum of %d and %d is = %d", num1, num2, num1 + num2);
    printf("\nDifference of %d and %d is = %d", num1, num2, num1 - num2);
}