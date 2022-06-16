// calculate parking charges
// 2€ for 1st 3 hours, 1hour = 2€/3hrs
#include <stdio.h>

// function prototype
double calculateParkingCharges(int parkingTime);

// main begins porogram execution
int main(void)
{
    // int customers = 0;
    // store parking times separetly
    double timeOne, timeTwo, timeThree = 0.0;

    // Read get parking time of customer 1
    printf("%s\n", "Enter 3 customers parking times ");
    scanf("%lf%lf%lf", &timeOne, &timeTwo, &timeThree);

    // calculate total parking time of all customers
    double totalParkingTime = timeOne + timeTwo + timeThree;

    double charges1 = calculateParkingCharges(timeOne);
    double charges2 = calculateParkingCharges(timeTwo);
    double charges3 = calculateParkingCharges(timeThree);

    // calculate total charges of all customer
    double totalCharges = charges1 + charges2 + charges3;

    // print table column head
    printf("%8s%10s%10s\n", "Asiakas", "Tunnit", "Veloitus");
    printf("%8d%10.2f%10.2f\n", 1, timeOne, charges1);
    printf("%8d%10.2f%10.2f\n", 2, timeTwo, charges2);
    printf("%8d%10.2f%10.2f\n", 3, timeThree, charges3);
    printf("%s%10.2f%10.2f\n", "YHTEENSA", totalParkingTime, totalCharges);

    return 0;
}

// calculate parking cost
double calculateParkingCharges(int parkingTime)
{
    double maximumCharge = 10.0;                            // Maximum charge in 24hrs
    double parkingCharge = 2.0;                             // cost of parking in Euros for 3 hours
    double normalParkingTime = 3;                           //  3 hour per single parking
    //double oneHourCost = parkingCharge / normalParkingTime; // calculate one hour parking cost
    double totalCharge = 0;                                 // tota cost of parking
    double additionalCharge = 0.5;                          // charge for each additional hour
    double overParking = 0.0;                               // time beyond 3 hours

    // check if parking time is greater tha zero
    if (parkingTime <= 0)
    {
        return 0;
    }
    // check if parking time is greater than 3
    if (parkingTime > 3)
    {
        // calculate over parking hours
        overParking = (parkingTime - normalParkingTime);

        // calculate total time
        totalCharge = parkingCharge + (overParking * additionalCharge);
        //  totalCharge = parkingCharge + (overParking * (oneHourCost + additionalCharge));

        // check if maximum charge has been reached
        if (totalCharge >= maximumCharge)
        {
            totalCharge = maximumCharge; // cost of 24hrs charge
        }
    }
    else
    {
        totalCharge = parkingCharge;
    }

    return totalCharge;
}
