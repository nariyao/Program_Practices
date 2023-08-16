/* 2.Write a C program for a service center by following given Rules and Guide lines.

* This service center only accepts 2 wheeler ,3 wheeler & 4 wheeler . If any other vehicle
came to you , you have to show a message that "this service center is not accepting
other than 2 wheeler, 3 wheeler and 4 wheeler".

* If the vehicle is 2 ,3 & 4 only then you have to ask the user what is the age of the vehicle.

* If the age your vehicle is above 8 months then only accept the service center
otherwise you have to show a message that "your vehicle servie will done after a while".

* If the vehicle age is greater than 8 months then show options to the user on the console.

* Options:

1)Enter 1 for tyre problem
2)Enter 2 for fuel problem
3)Enter 3 for engine issue
4)Enter 4 for general services

* If the user enter 1 as input so it is tyre problem statement so you have to show a message "how many tyres you are facing the issue ?", based on the issue on the no of tyres,
generate the bill.

* For example tyre cost Rs. 400 , if the user providing 3 tyre then the bill should be
generated as Rs. 1200 in below format.

Name of the owener
Name of the bike
Issue
Bill

* For fuels problem cost is Rs.1500
* For engine issue cost is Rs.5000
* For general servicing cost is Rs.1000

And generate the bill in the above format. */

#include <stdio.h>
#include <string.h>

int main()
{
    int vehicle_type, service_type, no_of_tyres;
    char vehicle_age, owner_name[20], vehicle_name[20], issue[30];
    float bill;

    printf("Enter vehicle type(ex. 2 for 2 wheels,3 for 3 wheels,etc): ");
    scanf("%d", &vehicle_type);
    if (!(vehicle_type == 2 || vehicle_type == 3 || vehicle_type == 4))
    {
        printf("\nthis service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
        return 0;
    }
R_E_VEHICLE:
    printf("\nEnter vehicle age is greater than 8 months(y,n): ");
    fflush(stdin);
    scanf("%c", &vehicle_age);
    if (vehicle_age == 'n' || vehicle_age == 'N')
    {
        printf("\nyour vehicle servie will done after a while");
        return 0;
    }
    else if (vehicle_age != 'y' && vehicle_age != 'Y')
    {
        printf("\nInvalid Input! Try again %c",vehicle_age);
        goto R_E_VEHICLE;
    }
R_E_SERVICE_TYPE:
    printf("\nChoose seercive type:\n1)Enter 1 for tyre problem\n2)Enter 2 for fuel problem\n3)Enter 3 for engine issue\n4)Enter 4 for general services\n5) Enter 5 for exit");
    printf("\nEnter option: ");
    scanf("%d", &service_type);

    if (service_type == 1)
    {
        printf("\nTyre problem");
        R_E_NO_OF_TYRES:
        printf("\nProblem's tyre numbers: ");
        scanf("%d", &no_of_tyres);
        if (no_of_tyres > vehicle_type || no_of_tyres < 1)
        {
            printf("\nInvalid input! try again");
            goto R_E_NO_OF_TYRES;
        }
        bill = no_of_tyres * 400;
        strcpy(issue, "Tyre problem");
    }
    else if (service_type == 2)
    {
        bill = 1500;
        strcpy(issue, "Fuel problem");
    }
    else if (service_type == 3)
    {
        bill=5000;
        strcpy(issue,"Engine problem");
    }
    else if (service_type == 4)
    {
        bill=1000;
        strcpy(issue,"General servicing");
    }
    else if (service_type == 5)
    {
        printf("\nThank you! Please visit again");
        return 0;
    }
    else
    {
        printf("\nInvalid input! try again");
        goto R_E_SERVICE_TYPE;
    }
    printf("\nEnter owner's name: ");
    scanf("%s",owner_name);
    printf("Enter vehicle's name: ");
    scanf("%s",vehicle_name);

    printf("\n\n----------Invoice---------");
    printf("\nName of the Owner: %s",owner_name);
    printf("\nName of the vehicle: %s",vehicle_name);
    printf("\nIssue: %s",issue);
    printf("\nBill: %.2f",bill);
    return 0;
}