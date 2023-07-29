#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 1st value: ");
    scanf("%d",&a);
    printf("Enter 2nd value: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=b-a;
    printf("a=%d , b=%d",a,b);
    return 0;
}