#include<stdio.h>

int main()
{
    int num1,num2,ans;
    char opr;
    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("\nEnter second number: ");
    scanf("%d",&num2);
    R_E_OPR:
    printf("\nEnter operator: ");
    scanf(" %c",&opr);
    switch(opr){
        case '+':printf("\nAddition is: %d",num1+num2);break;
        case '-':printf("\nsubtraction is: %d",num1-num2);break;
        case '*':printf("\nMultiplication is: %d",num1*num2);break;
        case '/':printf("\nDivision is: %.2f",(float)num1/num2);break;
        default:printf("\nwrong input! try again");goto R_E_OPR;
    }
    return 0;
}