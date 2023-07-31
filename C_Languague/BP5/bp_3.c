/* Write a program that take 5 subject as input from the user . Find out the average mark of the student . And by using ternary operator print the Student is pass or fail as per the average . If the average is greater than 60 then the Student is pass if the avg is less than 60 then the student is fail. */

#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5;
    float avg;

    printf("Enter 5 subject marks: ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    avg=(s1+s2+s3+s4+s5)/5;
    (avg>60)?printf("Pass"):printf("Fail");
}