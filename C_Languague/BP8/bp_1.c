/* Write a C to take the value from the user as input the month number and print number of days in that month. Using switch statement.
 */
#include<stdio.h>


int main(){
    int mon;
    R_E_MON:
    printf("Enter months(1-12): ");
    scanf("%d",&mon);

    switch (mon){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("\n31 Days");
                    break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("\n30 Days");
                    break;
        case 2: printf("\nEnter year: ");
                scanf("%d",&mon);
                if((mon%4==0 && mon%100!=0)|| mon%400==0) printf("\n29 Days");
                else printf("\n28 Days");
                break;
        default: 
                printf("\nWorng Input! Try again ");
                goto R_E_MON;
    }
}