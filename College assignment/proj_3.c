//Program to get area and circumference of circle
#include<stdio.h>
#include<conio.h>
void main()
{
    float radius;
    printf("\nEnter radius of a circle ");
    scanf("%f", &radius);
    printf("\nCircumference of a circle=%.2f",2*3.14*radius);
    printf("\nArea of a circle=%.2f", 3.14 * radius * radius);
}