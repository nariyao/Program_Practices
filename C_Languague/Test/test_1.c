#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, s1, s2, s3, class;
    float avg;
R_E_AGE:
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 5 || age > 18)
    {
        printf("\nIf the student is below 5yr and more than 18, you are not allowed in the school..");
        return 0;
    }
R_E_CLASS:
    printf("\nEnter class(1-9): ");
    scanf("%d", &class);
    if (class < 0 && class > 9)
    {
        printf("\nInvalid input");
        goto R_E_CLASS;
    }
R_E_SUB:
    printf("\nEnter marks of three subjects(0-100): ");
    scanf("%d%d%d", &s1, &s2, &s3);
    if (!(s1 >= 0 && s1 <= 100 && s2 >= 0 && s2 <= 100 && s3 >= 0 && s3 <= 100))
    {
        printf("\nInvalid input");
        goto R_E_SUB;
    }
    printf("\n-----------------------------\nStudent Age: %d", age);
    printf("\nClsss: %d", class);
    avg = (float)(s1 + s2 + s3) / 3;
    printf("\nAverage(%%): %.2f %%", avg);
    if (avg > 50.0)
        printf("Congrats! you are promoted to %d class.", ++class);
    else
        printf("Sorry! You are staying in same class %d", class);

    return 0;
}
