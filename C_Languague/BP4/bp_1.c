// check number is prime or not

#include <stdio.h>

int pc = 0;
int isPrime(int);


int main()
{
    int a, i;
    printf("\nEnter number: ");
    scanf("%d", &a);
    if (a < 1)
    {
        printf("Invalid input! Please enter positive number");
        return 0;
    }
    if(isPrime(a))
    {
        for ( i = 2; i < a; i++)
        {
            isPrime(i);
        }
        printf("\n%d",pc);
    }
    return 0;
}

int isPrime(int a)
{
    int i, count = 0;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
            count++;
    }
    if (count == 2)
    {
        pc++;
        printf("\n%d - It is prime number",a);
        return 1;
    }
    else
    {
        printf("\n%d -It is not prime number" ,a);
        return 0;
    }
}