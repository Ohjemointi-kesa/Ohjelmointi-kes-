/*calculates the salary to be paid to the employee based on the hourly wage,
the hours worked, and the amount of tax levied on the salary.*/

#include <stdio.h>
#define NORMALHOURS 40

int main()
{
    double totalHours = 0;    // hours Worked
    double hourlyRate = 0;    // hourly Wage
    double taxRate = 0.0;     // tax pecentage
    double grossSalary = 0.0; // total salary
    double totalTaxes = 0.0;  // tax payer's share
    double netSalary = 0.0;

    printf("%s", "Anna tuntipalkka >");
    scanf("%lf", &hourlyRate);

    printf("%s", "Tehdyt tunnit >");
    scanf("%lf", &totalHours);

    printf("%s", "Anna veroprosentti >");
    scanf("%lf", &taxRate);

    // Calculate salary with over time

    if (totalHours > NORMALHOURS)
    {
        double overTime = totalHours - NORMALHOURS; // calculate overtime

       // calculate extra salary
        double extraSalary = overTime * ((hourlyRate * 150)/100); // over time gets 1.5 fold
      
       // Calculate  gross salary
        grossSalary = (hourlyRate * NORMALHOURS ) + extraSalary; // normal hours

       // calculate taxes on salary
        totalTaxes = grossSalary * (taxRate/100);
       
       // calculate net salary
        netSalary = (grossSalary - totalTaxes);

        printf("Nettopalkkasi on %.2f euroa ja verottajan osuus on %.2f euroa", netSalary, totalTaxes);
    }
    else
    {
        // Calculate  gross salary
        grossSalary = hourlyRate * totalHours;

        // Calculate taxes paid
        totalTaxes = grossSalary * (taxRate / 100.0);

        // Calculate net salary
        netSalary = grossSalary - totalTaxes;

        printf("Nettopalkkasi on %.2f euroa ja verottajan osuus on %.2f euroa", netSalary, totalTaxes);
    }

    return 0;
}