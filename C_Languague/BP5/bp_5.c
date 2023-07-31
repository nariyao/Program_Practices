/* Write a c program to take  input of 3digit number from the user , and add the 1st digit and last digit of that given number.

Input as :
Enter a three digit number :
345

Output as :
The addition of first and last digit of the given num is : 8 */

#include<stdio.h>

int main()
{
    int a;
    printf("Enter three(3) digit number: ");
    scanf("%d",&a);
    printf("The addition of first and last diigit of the given number is: %d",a/100+a%10);
    return 0;
}