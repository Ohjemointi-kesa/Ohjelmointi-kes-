// calculate parking charges
// 2€ for 1st 3 hours, 1hour = 2€/3hrs
#include <stdio.h>

double calculateParkingCharges();

int main(void)
{
    int customers = 3;
    double parkingHours = 0.0;
    

    for (int i = 1; i <= customers; i++)
    {
        printf("Enter customer %d parking hours ", i);
        scanf("%lf", &parkingHours);
        

    }
    

    return 0;
}