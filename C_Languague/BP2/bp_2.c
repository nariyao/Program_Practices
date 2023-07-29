/*Write a C program to find the next multiple of 100 of a given three digit number . The given number is 234 and the output is 300.*/ 
#include<stdio.h>

int main()
{
    int a;
    printf("Enter 3-digit number: ");
    scanf("%d",&a);
    a=a/100;
    a=++a*100;
    printf("%d",a);
    return 0;
}