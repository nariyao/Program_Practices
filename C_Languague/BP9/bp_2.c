#include<stdio.h>

int main(){
    int p1_score,p2_score;
    char p1_name[20],p2_name[20];

    printf("Enter 1st player's name: "); scanf("%s",p1_name);
    printf("\nEnter score: "); scanf("%d",&p1_score);
    printf("\nEnter 2nd player's name: "); scanf("%s",p2_name);
    printf("\nEnter score: "); scanf("%d",&p2_score);
    switch(p1_score>p2_score)
    {
        case 1: printf("\nWinner's name: %s",p1_name);
        printf("\nWin by %d scores",p1_score-p2_score);
        break;
        case 0:switch(p1_score<p2_score)
    {
        case 1: printf("\nWinner's name: %s",p2_name);
        printf("\nWin by %d scores",p2_score-p1_score);
        break;
        case 0: printf("\nWinner's name: %s & %s",p1_name,p2_name);
        printf("\nBoth winners scores are %d",p2_score);
        break;
            
    }
    }

    return 0;
}