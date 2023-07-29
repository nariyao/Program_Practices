#include<stdio.h>

int main()
{
    int days,weeks,months, years;

    printf("Enter numbers of days: ");
    scanf("%d",&days);

    years= days/365;
    days %=365;
    months = days/30;  
    days %=30;
    weeks = days/7;
    days %=7;


    printf("Days: %d\nWeeks: %d\n Months: %d \nYears: %d",days,weeks,months,years);  
    return 0;
}