/* Design and implement a program that reads two integers. The program examines whether
the first number entered is a multiple of the second number worked. The program notifies
the user of the final result in either format */
#include <stdio.h>

// function main begins program execution
int main()
{
    int firstDigit = 0;  //  first number
    int secondDigit = 0; //  second number
    // prompt user for the first number
    printf("%s", "Enter the first number >");
    scanf("%d", &firstDigit);

    // prompt user for the second number
    printf("%s", "Enter the second number >");
    scanf("%d", &secondDigit);

    // the imput should be greter than zero
    if (secondDigit != 0)
    {
        // check if the first number is a multiple of the second number
        if (firstDigit % secondDigit == 0)
        {
            printf("Luku %d on luvun %d monikerta.", firstDigit, secondDigit);
        }
        else
        {
            printf("Luku %d ei ole luvun %d monikerta.", firstDigit, secondDigit);
        }
    }

    return 0;
}
