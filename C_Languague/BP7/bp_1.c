#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>0&&b>0&&c>0){
    if(a==b&&a==c) printf("\nThe triangle is an Equilateral triangle.");
    else if(a==b ||a==c||b==c) printf("\nThe triangle is an isosceles triangle.");
    else printf("\nThe triangle is n Scalene triangle.");
    }else printf("\nInvalid Input");
}