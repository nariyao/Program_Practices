/* Write a C program to convert temperature from Fahrenheit to Celsius.
C= (F - 32) * (5.0 / 9.0)

Input as :
Enter temperature in Fahrenheit: 100

Expected output:
100.00 Fahrenheit is 37.78 Celsius.*/

#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter Fahrenheit: ");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0);
    printf("\n\nFahrenheit: %.2f%c",f,248);
    printf("\nCelsius: %.2f%c",c,248);
}