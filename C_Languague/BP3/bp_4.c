#include<stdio.h>

int main()
{
    char a;

    printf("Enter a character: ");
    scanf("%c",&a);

    ((a>=65 && a<=90) || (a>=97 && a<=122) )?printf("it is alphabet"):(a>=48 && a<=57)?printf("it is digit"):printf("it is neither alphabet nor digit"); 

    return 0;
