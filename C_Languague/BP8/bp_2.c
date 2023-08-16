#include<stdio.h>

int main(){
    char a;
    R_E_A:
    fflush(stdin);
    printf("\nEnter character: ");
    scanf("%c",&a);
    if(!((a>='A' && a<='Z')||(a>='a' && a<='z')))
    {
        printf("Worng Input! try again");
        goto R_E_A;
    }
    switch (a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\nVowel");
            break;
        default:
            printf("\nConsonent");
    }
    return 0;
}