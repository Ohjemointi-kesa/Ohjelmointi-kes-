// calculate parking charges
// 2€ for 1st 3 hours, 1hour = 2€/3hrs
#include <stdio.h>

// function prototype
double calculateParkingCharges(int parkingTime);

// main begins porogram execution
int main(void)
{
    // int customers = 0;
    double parkingTimeOne, parkingTimeTwo, parkingTimeThree = 0.0;

    printf("Enter customer 1 parking time > ");
    scanf("%lf", &parkingTimeOne);

    printf("Enter customer 2 parking time > ");
    scanf("%lf", &parkingTimeTwo);

    printf("Enter customer 3 parking time > ");
    scanf("%lf", &parkingTimeThree);

    // print table column head
    printf("\n%7s%10s%10s\n", "Asiakas", "Tunnit", "Veloitus");

    double charges1 = calculateParkingCharges(parkingTimeOne);
    printf("%d%7.2f\n%10.2f%10.2f\n", 1, charges1, parkingTimeOne);

    double charges2 = calculateParkingCharges(parkingTimeTwo);
    printf("%d%7.2f\n%10.2f%10.2f\n", 2, charges2);
    
    double charges3 = calculateParkingCharges(parkingTimeThree);
    printf("%d%7.2f\n%10.2f%10.2f\n",3, charges3);

    printf("%5s%5.2f\n", "YHTEENSA ", parkingTimeOne + parkingTimeTwo + parkingTimeThree);

    return 0;
}

// calculate parking cost
double calculateParkingCharges(int parkingTime)
{
    double parkingCharge = 2.0;                             // cost of parking in Euros for 3 hours
    double normalParkingTime = 3;                           //  3 hour parking
    double oneHourCost = parkingCharge / normalParkingTime; // calculate one hour parking
    double totalCharge = 0;                                 // tota cost of parking
    double additionalCharge = 0.5;                          // charge for each additional hour
    double overParking = 0.0;                               // time beyond 3 hours

    // check if parking time is greater than 3
    if (parkingTime > 3)
    {
        // calculate over parking hours
        overParking = (parkingTime - normalParkingTime);

        // calculate total time
        totalCharge = parkingCharge + (overParking * (oneHourCost + additionalCharge));
    }
    else
    {
        totalCharge = parkingCharge;
    }
    return totalCharge;
}