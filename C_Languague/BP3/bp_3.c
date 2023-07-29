#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    (a%b==0)?printf("%d is Divisible by %d",a,b):printf("%d is not Divisible by %d",a,b);
    return 0;
}