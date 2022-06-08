/* Add positive  real numbers entered by the user untill the user input a negative
input. then calculate the avarage of real numbers  Using for loop*/
#include <stdio.h>

int main()
{
    double userInput = 0.0; // store use input
    double avarage = 0.0;   // input avarage
    double sum = 0.0;       // sum of user input
    int counter = 0;        // number of inputs

    for (; userInput >= 0;)
    {
        // Prompt the user for  input
        puts("Enter real numbers or a negative to quit ");
        scanf("%lf", &userInput);

        // check if input is negative
        if (userInput >= 0)
        {
            sum += userInput;
            counter++;
        }
    }
    avarage = sum / counter;
    printf("Avarage %.2lf", avarage);

    return 0;
}