#include <stdio.h>
#include<math.h>

void Swap(int a, int b);

int main()
{
    /*int a = 5; //12 + 6
    int b = (++a + a++) + --a;// 6 6
                      printf("a=%d , b=%d ", a, b);
    return 0;*/
    /*int a = 20;
     a = ++a / 2;
     printf("%d", a);
     a = a++ / 2;
     printf("  %d", a);
     return 0;*/

    //  int a=5;
    //  int b;
    //  a = ++a + a++ +a++ + --a -a++ - ++a;
    //  b = ++a + a++ + --a;
    //  printf("a=%d  b=%d",a,b);

    //4)Write a C program find the next multiple of 100 of a given three digit number.. Number is 253 output as 300
    //int a;
    // scanf("%d",&a);
    // a = a/100;
    // a = ++a *100;

    // int a = 10,b;
    // // printf("%d",4- -4);                                   

    // b=a++ + ++a;
    // printf("%d , %d, %d, %d ,%d",b,a++,a,++a,a++);
    unsigned int a = -4;
    printf("%d",3*2--);
    return 0;
}
//3)Write a program to swap two numbers using third variable...
void Swap(int a ,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}