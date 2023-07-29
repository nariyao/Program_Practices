#include<stdio.h>

void main()
{
    int y=10;
    if(y++>9 && y++!=10 &&y++>11)
    {
        printf("true %d",y);
    }else  
        printf("false %d",y);
}