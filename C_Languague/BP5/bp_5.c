/* Write a C program to take two character input from the user and print the ASCII value of that two character and display its sum.

Input as :
Enter a character: a b

Expected output :
ASCII value of a is : 97
ASCII value of b is : 98
ASCII sum of a & b is : 195 */

#include<stdio.h>

int main()
{
    char a,b;
    printf("Enter two character: ");
    scanf("%c%c",&a,&b);
    printf("\nASCII value of %c is : %d",a,a);
    printf("\nASCII value of %c is : %d",b,b);
    printf("\nASCII sum of %c & %c : %d",a,b,a+b);
    return 0;
}