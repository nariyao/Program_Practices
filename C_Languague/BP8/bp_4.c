#include<stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    switch(num%2)
    {
        case 0: printf("\nEven");break;
        case 1: printf("\nOdd");
    }
    return 0;
}