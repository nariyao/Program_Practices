/*Write a program to take input for seconds from the user , And convert it into Hour, Minutes , Second format.*/
#include<stdio.h>

int main()
{
    int sec,min,hr;
    printf("Enter seconds: ");
    scanf("%d",&sec);

    hr = sec/3600;
    sec %=3600;
    min = sec/60;
    sec %=60;
    printf("Hours: %d\nMinutes: %d\nSeconds: %d",hr,min,sec);
    return 0;
}