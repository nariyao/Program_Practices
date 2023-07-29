/*Write a c program to find the next multiple of 10 of a given two digit number, if the given number's last digit is less than 5 then 
find the previous multiple of 10 and if the given number's last digit is greater than or equal to 5 then find the next multiple of 10.
[Dont use if else or ternary operator ]

Case-1
--------
Given number is 34 and output is 30 

Case-2
---------
Given number is 47 and output is 50
*/ 
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 2-digit number: ");
    scanf("%d",&a);
    b=a/10;
    switch(a%10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4: 
                printf("Given number is %d and output is %d",a,b*10);
                break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
                printf("Given number is %d and output is %d",a,++b*10);
                break;
    }
    return 0;
}