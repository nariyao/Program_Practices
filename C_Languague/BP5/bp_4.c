/* Write a C program to find the maximum of three numbers take all the numbers as a input form user by using scanf().

Input as :
Enter three numbers: 30 10 20

Expected Output :
Maximum of three numbers: 30 */

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c); 
    a>b&&a>c&&printf("Maximum of three numbers: %d",a)||b>c&&printf("Maximum of three numbers: %d",b) || printf("Maximum of three numbers: %d",c);
    return 0;
}