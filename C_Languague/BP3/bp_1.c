#include<stdio.h>

int main()
{
    float s,r;

    printf("Enter Radius of Circle: ");
    scanf("%f",&r);
    printf("Enter Side of : Square: ");
    scanf("%f",&s);

    printf("Area of circle: %.2f",3.14*r*r);
    printf("\nArea of Square: %.2f",s*s);
    return 0;
}