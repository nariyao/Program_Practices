#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("\nEnter any number");
    scanf("%d", &num);
    printf("\nSquare of the number %d=%d", num, num * num);
    printf("\nCube of the number %d=%d", num, num * num * num);
}