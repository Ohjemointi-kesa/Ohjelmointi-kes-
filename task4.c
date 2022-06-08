/* Make a program that reads the loan amount, loan interest rate,
 and number of loan days from the user, in that order. The program
 calculates how much interest the customer has to pay for the loan period.
 Formula: total interest rate = loan * interest rate * loan dates / 365 (P*R*T/365)
 */

#include <stdio.h>

int main()
{
    double principal = 0.0;        // loan
    double interestRate = 0.0;      // rate
    int loanDays = 0.0;          // days
    double totalInterestRate = 0.0; // interest rate

    // Read loan amount from user
    printf("%s", "Enter principal Amount >");
    scanf("%lf", &principal);

    // Read interest rate from user
    printf("%s", "Enter interest rate >");
    scanf("%lf", &interestRate);
    
    // Read loan days from user 
    printf("%s", "Enter loan days >");
    scanf("%d", &loanDays);

    // Calculate total intereste rate
    totalInterestRate = principal * (interestRate / 100) * loanDays / 365;
    printf("Lainapaaoman %.2f euroa korko %d paivalta "
            "korkoprosentilla %.2f on yhteensa %.2f euroa",
            principal, loanDays, interestRate, totalInterestRate);
                         
    return 0;
}
