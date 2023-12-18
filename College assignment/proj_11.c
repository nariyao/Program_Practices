#include<stdio.h>
void main()
{
    int SALARY;
    float BONUS;
    char GENDER;
    printf("\nEnter the salary of employee: ");
    scanf("%d", &SALARY);
    printf("\nEnter the gender(M/F) of employee: ");
    scanf("%s",&GENDER);
    if(SALARY>=10000 && GENDER=='M')
    {
        BONUS = (5 * SALARY) / 100;
    }
    else if (SALARY>=10000 && GENDER=='F')
    {
        BONUS = (10 * SALARY) / 100;
    }
    else
    {
        BONUS = (7 * SALARY) / 100;
    }
    printf("\nSalary: %d", SALARY);
    printf("\nBonus: %.2f", BONUS);
    printf("\nTotal salary: %.2f", SALARY + BONUS);
}