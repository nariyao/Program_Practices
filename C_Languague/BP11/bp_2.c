#include<stdio.h>

int main()
{
    int i,j,r,c,k=-1;
    printf("Enter a row and column number: ");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r*2;i+=2){
        for(j=1;j<=i;j++){
            (j%2!=0)?printf("%2d",(j+1)/2):printf(" * ");
        }
        printf("\n");
    }
    return 0;
}