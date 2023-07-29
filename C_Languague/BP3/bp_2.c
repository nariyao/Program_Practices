#include<stdio.h>

int main()
{
    int days,months, years;

    printf("Enter numbers of days: ");
    scanf("%d",&days);

    years= days/365;
    days %=365;
    months = days/30;  
    days %=30;

    printf("Days: %d\n Months: %d \nYears: %d",days,months,years);  
    return 0;
}