/*Make a program that prints a pattern.
 Use a repeat structure (do-while, while, or for)*/
/* c program to print a pattern(right-angle triagle) useing repeat structures */

#include <stdio.h>

int main(void)
{
    // 4 by 4
    int patternSize = 8; // initialize number of rows and columns

    // looping through rows
    for (int row = 1; row <= patternSize; row++)
    {
        // loop through rows and subtrack rows from current row replacing with empty space
        for (int currentRow = 1; currentRow <= patternSize - row; currentRow++)
        {
            printf(" ");
        }

        // loop through columns
        for (int column = 1; column <= row; column++)
        {
            printf("a");
        }
        printf("\n");
    }

    return 0;
}