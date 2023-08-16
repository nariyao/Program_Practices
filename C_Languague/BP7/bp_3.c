/* You are developing a ticket pricing system for a theme park. Write a program that takes the following inputs from a customer:

Age (integer)
Height in centimeters (float)
Whether the customer has a VIP pass (y or n)
The program should calculate the ticket price based on the following rules:

Children under 3 years old (inclusive) get in for free.
Children aged 4 to 12 (inclusive) pay Rs.20.
Adults aged 13 to 64 (inclusive) pay Rs.100.
Seniors aged 65 and above pay Rs.50.
However, there are some additional considerations based on height:

If the customer is above 180 cm in height, they pay an extra 50.
If the customer is between 120 cm (inclusive) and 180 cm (inclusive), no additional charge applies.
If the customer is below 120 cm, they receive a 50% discount on the base ticket price.
If the customer has a VIP pass, they get a 10% discount on the final ticket price.

Write a program that implements these pricing rules and provides the following output:

The customer's age, height, and VIP pass status.
The calculated base ticket price before any discounts or additional charges.
Any discounts or additional charges applied based on height.
The final ticket price after applying all discounts and charges.
Additionally, if the customer's age is below 0 or height is negative, the program should provide an error message.
 */

#include <stdio.h>

int main()
{
    int age;
    float height, amount;
    char vip;
    printf("\t\tWelcome To Theme Park");
R_E:
    printf("\n\nEnter age: ");
    scanf("%d", &age);
    printf("Enter height(in cms): ");
    scanf("%f", &height);
    printf("you have VIP pass(y or n): ");
    scanf(" %c", &vip);
    if (!(age > 0 && height > 25 && !(vip != 'y' && vip != 'Y' && vip != 'N' && vip != 'n')))
    {
        printf("\nInvalid Input! try again");
        goto R_E;
    }

    if (age > 65)
    {
        if (height > 180)
            amount = 100;
        else if (height <= 180 && height >= 120)
            amount = 50;
        else
            amount = 25;
    }
    else if (age > 13)
    {
        if (height > 180)
            amount = 150;
        else if (height <= 180 && height >= 120)
            amount = 100;
        else
            amount = 50;
    }
    else if (age > 3)
    {
        if (height > 180)
        {
            printf("\ninvalid age");
            goto R_E;
        }
        else if (height <= 180 && height >= 120)
            amount = 20;
        else
            amount = 10;
    }
    else
    {
        if (height >= 120)
        {
            printf("\ninvalid age");
            goto R_E;
        }
        else
            amount = 0;
    }

    if (vip == 'y' && vip == 'Y')
        amount -= .1 * amount;

    printf("\nFinal Ticket price: %.2f", amount);
    return 0;
}
