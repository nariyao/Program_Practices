// program to get total marks, average marks, and overall percent in the three subject  
#include <stdio.h>
#include <conio.h>
void main()
{
    int sub1,sub2,sub3;
    printf("\nEnter marks in 3 subjects respectively ");
    scanf("%d%d%d", &sub1, &sub2, &sub3);
    printf("\nMarks obtained in 1st subject = %d",sub1);
    printf("\nMarks obtained in 2nd subject = %d",sub2);
    printf("\nMarks obtained in 3rd subject = %d",sub3);
    printf("\nTotal markd obained= %d", sub1+sub2+sub3);
    printf("\nAverage marks= %d", (sub1+sub2+sub3)/3);
    printf("\nPercentage marks= %d %", (sub1+sub2+sub3)/3);
}