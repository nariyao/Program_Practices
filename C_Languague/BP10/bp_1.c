#include<stdio.h>

int main()
{
    int r,c,i,j,k=1;
    printf("Enter row or column: ");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++){
            printf("%2d ", k++%2==0);
        }
        printf("\n");
    }
    return 0;
}