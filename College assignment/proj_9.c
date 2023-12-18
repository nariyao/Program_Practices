#include <stdio.h>
#include <conio.h>
void main()
{
    int YEARS;
    float PRINCIPLE,RATE,SI;
    printf("\nEnter principle amount");
    scanf("%f", &PRINCIPLE);
    printf("\nEnter the rate of interest");
    scanf("%f", &RATE);
    printf("\nEnter the time period");
    scanf("%d", &YEARS);
    SI = (PRINCIPLE * RATE * YEARS) / 100;
    printf("\nPrinciple amount= %.2f", PRINCIPLE);
    printf("\nRate of interest= %.2f", RATE);
    printf("\nTime period= %d", YEARS);
    printf("\nSimple Interest= %.2f", SI);
}