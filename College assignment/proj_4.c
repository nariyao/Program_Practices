//program to get area of rectangle and triangle
#include<stdio.h>
#include<conio.h>
void main()
{
    int BASE, HEIGHT, LENGTH, BREADTH;
    float AREA;
    printf("\nEnter the base of triangle");
    scanf("%d", &BASE);
    printf("\nEnter the height of triangle");
    scanf("%d", &HEIGHT);
    printf("\nEnter the length of Rectangle");
    scanf("%d", &LENGTH);
    printf("\nEnter the breadth of Rectangle");
    scanf("%d", &BREADTH);
    AREA = (BASE * HEIGHT) / 2;
    printf("\nArea of a triangle= %.2f",AREA);
    AREA = LENGTH * BREADTH;
    printf("\nArea of Rectangle= %.2f", AREA);
}