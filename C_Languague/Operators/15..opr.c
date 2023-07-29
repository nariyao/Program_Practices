/*
15.what will be the output when following code is executed?

#include<stdio.h>
void main()
{
   int a=10, b=11, c=13, d;
   d = (a=c, b+=a, c=a+b+c);
   printf("%d %d %d %d", d, a, b, c);
}

A. 50, 13, 11, 13

B. 50, 13, 24, 50

C. 13, 10, 24, 50

D. 50, 13, 24, 13

E. 13, 13, 24, 13
*/

#include<stdio.h>

int main()
{
    int a=10, b=11,c=13,d;
    d=(a=c,b+=a,c=a+b+c);
    printf("%d %d %d %d",d,a,b,c);
    return 0;
}