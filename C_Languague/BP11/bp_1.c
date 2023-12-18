#include<stdio.h>

int main()
{
    int i,j,r,c,k=-1;
    printf("Enter a row and column number: ");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        k+=2;
        for(j=1;j<=i;j++){
            printf("0 ");
        }
        for(j=1;j<=c-i;j++){
            printf("%2d",k+j-1);
        }
        printf("\n");
    }
    return 0;
}