#include<stdio.h>

int main()
{
    int r,c,i,j,k=1;
    printf("Enter row and column: ");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r/2;i++){
        for(j=1;j<=i;j++){
            printf("%2d ",k++);
        }
        printf("\n");
    }
    r = (r%2!=0)?r/2+1:r/2;
    for(i=r;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%2d ",k++);
        }
        printf("\n");
    }
    return 0;
}