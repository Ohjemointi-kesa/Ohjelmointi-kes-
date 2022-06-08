/* Calculates the salary to be paid to the employee based on the hours
   worked and the hourly wage */
#include <stdio.h>

int main()
{
    int totalHours = 0; //hours Worked
    int hourlyRate = 0; // hourly Wage
    int salary = 0; // total salary
    
    printf("%s", "Anna tuntipalkka >");
    scanf("%d", &hourlyRate);
    
    printf("%s","Tehdyt tunnit >");
    scanf("%d", &totalHours);

    // Calculate  salary
    salary = hourlyRate * totalHours;

    printf("Bruttopalkkasi on %d euroa ", salary); 

    return 0;
}