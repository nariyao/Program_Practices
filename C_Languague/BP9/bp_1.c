#include<stdio.h>

int main()
{
    int id;
    printf("Enter id: ");
    scanf("%d",&id);
    switch(id>=11&&id<=15)
    {
        case 1: printf("\nSoftware Department");break;;
        case 0:switch(id>=16&&id<=20)
    {
        case 1: printf("\nDeveloper Department");break;;
        case 0:switch(id>=21&&id<=23)
    {
        case 1: printf("\nManagement Department");break;;
        case 0: printf("\nWrong Input");break;;
    } 
    } 
    }
    return 0;
}