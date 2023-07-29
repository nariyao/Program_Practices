/*1.write a c program using tarnary operator for checking the person is eligible for voting or not. the age of person should be greater than 18 and less than 90 than only person is eligible to vote otherwise not

2. Write a c program to check the give two number which is the biggest number among than and both numbers are same then show status as both are equal.
	inp: a=20 b=30  opt: a is the biggest
	inp: a=50 b=10 opt: a is the biggest
	inp: a=20 and b=20 opt: both are same

----------------------------------------------------------------------------------------------------------------------------------------------------------*/


#include<stdio.h>

int main()
{
    int age,a,b;

    //1st question
    printf("Enter age: ");
    scanf("%d",&age);
    (age>18 && age <90)?printf("\nEligible to vote"):printf("\nNot eligible to vote");

    //2nd question
    printf("\nEnter two number: ");
    scanf("%d%d",&a,&b);
    (a>b)?printf("\n%d is biggest",a):(a<b)?printf("\n%d is biggest",b):printf("\n%d and %d are same",a,b);
    return 0;
}