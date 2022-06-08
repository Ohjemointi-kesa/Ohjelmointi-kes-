/* calculates the salary to be paid to the employee based on the hours 
worked and the hourly wage and the amount of tax levied on the salary*/

#include <stdio.h>

int main()
{
    double totalHours = 0; //hours Worked
    double hourlyRate = 0; // hourly Wage
    double taxRate = 0.0; // tax pecentage
    double grossSalary = 0.0; // total salary
    double totalTaxes = 0.0; // tax payer's share
    double netSalary = 0.0; 

    printf("%s", "Anna tuntipalkka >");
    scanf("%lf", &hourlyRate);
    
    printf("%s","Tehdyt tunnit >");
    scanf("%lf", &totalHours);

    printf("%s","Anna veroprosentti >");
    scanf("%lf", &taxRate);

    // Calculate  gross salary
    grossSalary = hourlyRate * totalHours;
    
    // Calculate taxes paid
    totalTaxes = grossSalary * (taxRate/100.0);

    // Calculate net salary
    netSalary = grossSalary - totalTaxes;

    printf("Nettopalkkasi on %.2f euroa josta veron osuus on %.2f euroa", netSalary, totalTaxes);

    return 0;
}