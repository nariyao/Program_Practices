#include<stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);

    if(a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u' ||a=='A' ||a=='E' ||a=='I' ||a=='O' || a=='U' )
        printf("%c is a vowel.",a);
    else if((a>='A' && a<='Z')||(a>='a' && a<='z')) 
        printf("%c is a consonant.",a);
    else
        printf("\nInvalid Input");
}
