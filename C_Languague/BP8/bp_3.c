#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    switch((int)(a>b)){
        case 1:
            printf("\nfirst is bigger %d",a);
            break;
        case 0:
            switch((int)(a<b))
            {
            case 1:
                printf("\nSecond is bigger %d",b);
                break;
            case 0:
                printf("\nBoth are same %d",a);
            }
    }
    return 0;
}