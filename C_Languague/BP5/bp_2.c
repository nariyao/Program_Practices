/* Write a C program to convert a lowercase character to uppercase take the lowercase character as a input from the user by using scanf().

Input as :
Enter a lowercase character: u

Expected output :
Uppercase equivalent: U */

#include<stdio.h>

int main()
{
    char c;
    printf("Enter a lowercase character: ");
    scanf("%c",&c);
    printf("Uppercase equivalent: %c",c-32);
    return 0;
}