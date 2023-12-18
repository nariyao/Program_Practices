#include<stdio.h>

int main(){
    int r,c,i,j,k;
    printf("Enter row and column: ");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++){
    for(j=i;j<=r;j++){
        printf("%2d ",j);
    }
    for(j=1;j<=i-1;j++){
        printf("%2d ",j);
    }
    printf("\n");
    }
    return 0;
}