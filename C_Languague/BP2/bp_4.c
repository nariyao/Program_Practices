/*Write a C program to find the reverse of two digit number . Given number is 78 and output is 87.*/

#include<stdio.h>

int main()
{
    int num,rev;
    printf("Enter two digit number: ");
    scanf("%d",&num);

    rev=num%10;
    rev=rev*10+num/10;
    printf("Reverse of %d is %d",num,rev);
    return 0;
}