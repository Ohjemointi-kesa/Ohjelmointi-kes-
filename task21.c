/* c program that reads a five-digit binary number and converts it to a decimal number and
prints the result on the screen. */

#include <stdio.h>

int main()
{
    int binaryNumber = 0; // user input
    int exponent = 1; // initial 2^n of 2^3, 2^2, 2^1, 2^0
    int decimal = 0; // store calculated decimal number 
    int remainder = 0; // the reaminder  of any number devide by ten is it's last digit
    int counter = 0;   // number of binary digit

    // Prompt user for binary number
    printf("Enter a five digit binary number ");
    scanf("%d", &binaryNumber);
<<<<<<< Updated upstream

    int binaryValue = binaryNumber; // copy unser input to binary value

    // check if it is five digit binary
=======
    
    // while input is greater than 0 trancate
>>>>>>> Stashed changes
    while (binaryNumber > 0)
    {
        binaryNumber /= 10;
        counter++;
    }
    // check if counter is 5 
    if (counter != 5)
    {
        puts("The input is not a five digit number ");
        return 0;
    }

<<<<<<< Updated upstream
    // check that the input is not zero
    while (binaryValue != 0)
=======
    // while input is greater than 0 find the remainder
    while (binaryNumber != 0)
>>>>>>> Stashed changes
    {

        remainder = binaryValue % 10; // get remainder
        decimal = decimal + (remainder * exponent);

        // to remove used bin digit dived by to
        binaryValue /= 10;
        exponent *= 2;
    }
    printf("%d\n", decimal);

   
    return 0;
}