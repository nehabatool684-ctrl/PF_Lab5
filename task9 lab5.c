#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num, base, exponent;

    printf("------------------------Mathematical Calculator-------------------\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &num);

            if (num < 0)
            {
                printf("Invalid input! Square root requires a non-negative number.\n");
            }
            else
            {
                printf("Square Root = %.2lf\n", sqrt(num));
            }
            break;

        case 2:
            printf("Enter the base: ");
            scanf("%lf", &base);

            printf("Enter the exponent: ");
            scanf("%lf", &exponent);

            printf("Power = %.2lf\n", pow(base, exponent));
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%lf", &num);

            printf("Absolute Value = %.2lf\n", fabs(num));
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%lf", &num);

            printf("Floor: %.2lf\n", floor(num));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num);

            printf("Ceiling: %.2lf\n", ceil(num));
            break;

        default:
            printf("Invalid menu choice!\n");
    }

    return 0;
}



