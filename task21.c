/* c program that reads a five-digit binary number and converts it to a decimal number and
prints the result on the screen. */

#include <stdio.h>

int main()
{
    int binaryNumber = 0;
    int exponent = 1; // 2^3, 2^2, 2^1, 2^0
    int decimal = 0;
    int remainder = 0; // any number devide by ten  the reaminder is it's last digit
    int counter = 0;   // number of binary digit

    
    // Prompt user for input
    printf("Enter a five digit binary number ");
    scanf("%d", &binaryNumber);
    
    // check for input is greater than 0
    while (binaryNumber > 0)
    {
        binaryNumber /= 10;
        counter++;
    }

    // if the input is not a five digit binary ask for imput again
    if (counter != 5)
    {
        printf("Enter a five digit binary number ");
        scanf("%d", &binaryNumber);
    }

    // check that the input is not zero
    while (binaryNumber != 0)
    {
        remainder = binaryNumber % 10; // get remainder
        decimal = decimal + (remainder * exponent);

        // to remove used bin digit dived by to
        binaryNumber /= 10;
        exponent *= 2;
    }
    printf("%d", decimal);

    return 0;
}