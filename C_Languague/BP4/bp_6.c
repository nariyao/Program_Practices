/* Write a C program to swap first and last digit of a given four digit number .Take the input from the user.

Input as :
enter a four digit number :
6437

Output as :
The result is : 7436 */

#include<stdio.h>

int main()
{
    int num,mn,fn,ln;
    printf("Enter four digit number: ");
    scanf("%d",&num);

    fn= (num/1000);
    mn = ((num%1000)/10)*10;
    ln = (num%10)*1000;

    printf("The result is %d",fn+mn+ln);
    return 0;
}