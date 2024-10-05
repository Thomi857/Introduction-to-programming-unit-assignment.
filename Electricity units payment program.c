#include<stdio.h>

int main()
{
    int CustomerID;
    char CustomerName[50];
    float UnitsConsumed, chargesperunit;

    printf("Enter the CustomerID: ");
    scanf("%d", &CustomerID);

    printf("Enter the name of the customer: ");
    scanf("%s", CustomerName);

    printf("Enter the Units consumed: ");
    scanf("%f", &UnitsConsumed);

    if (UnitsConsumed <= 199) {
        chargesperunit = 1.20;
    }
    else if (UnitsConsumed >= 200 && UnitsConsumed < 400)
        {
        chargesperunit = 1.50;
    }
    else if (UnitsConsumed >= 400 && UnitsConsumed < 600)
    {
        chargesperunit = 1.80;
    }
    else {
        chargesperunit = 2.00;
    }

    printf("Customers, ID: %d\n", CustomerID);
    printf("Customers' Name: %s\n", CustomerName);
    printf("Units Consumed: %.2f\n", UnitsConsumed);
    printf("Amount Charged per Unit: %.2f\n", chargesperunit);

    return 0;
}
