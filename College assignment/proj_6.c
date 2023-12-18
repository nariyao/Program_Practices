#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("\nEnter any number");
    scanf("%d", &num);
    printf("\nQuotient of %d if divide by 5=%d", num,num/5);
    printf("\nRemainder of %d if divided by 5=%d", num, num%5);
}