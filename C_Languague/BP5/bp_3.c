/* Write a C program to calculate the sum of natural numbers from 1 to a given positive integer by the user,take the input from the user by using scanf(). Develop it without using loops.

Input as :
Enter a positive integer: 10

Expected output:
The sum of natural numbers from 1 to 10 is: 55 */

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    printf("The sum of natural numbers from 1 to %d is: %d",num,num*(num+1)/2);
    return 0;
}