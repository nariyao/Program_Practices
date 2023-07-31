/*Write a program that takes input from the user, take some input for centimeter and convert that into inches .
*/ 
#include<stdio.h>

int main()
{
    float cm;
    printf("\nEnter centimeter (to inch): ");
    scanf("%f",&cm);
    printf("Centimeter: %.2f cm \n Inch: %.2f",cm,cm/2.54);
    return 0;
}