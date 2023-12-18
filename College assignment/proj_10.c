// Program to check special number
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,q,r;
    printf("Enter any 2-digit number");
    scanf("%d", &num);
    q = num / 10;
    r = num % 10;
    if ((q+r+(q*r))==num)
        printf("Entered number %d is a special 2-digit number",num);
    if ((q+r+(q*r))!=num)
        printf("Entered number %d is not a special 2-digit number",num);
}