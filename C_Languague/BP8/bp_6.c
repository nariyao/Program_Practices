#include<stdio.h>

int main()
{
    int phy,mat,che,com,bio;
    float avg;
    printf("Enter 5 subject marks(phy,math,che,com,bio): ");
    scanf("%d%d%d%d%d",&phy,&mat,&che,&com,&bio);

    avg=(phy+mat+che+com+bio)/5.0f;
    switch(avg>=90)
    {
        case 1: printf("\nGrade A");break;
        case 0: switch(avg>=80)
    {
        case 1: printf("\nGrade B");break;
        case 0:switch(avg>=70)
    {
        case 1: printf("\nGrade C");break;
        case 0:switch(avg>=60)
    {
        case 1: printf("\nGrade D");break;
        case 0:switch(avg>=40)
    {
        case 1: printf("\nGrade E");break;
        case 0:  printf("\nGrade f");break;
        
    }
        
    }
        
    }
        
    }
        
    }
        
    return 0;
}