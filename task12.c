/* a program that prints Celsius and the corresponding
 Fahrenheit in increments from -100 to 100C , Fahrenheit = 1.8 * celsius + 32*/

#include <stdio.h>

int main()
{
    int celcius = 0;
    double farenheit = 0.0;
    int range = 10; // printing range

    printf("%7s%12s", "Celcius", "Fahrenheit");
    puts("");

    for (celcius = -100; celcius <= 100; celcius++)
    {
        farenheit = (celcius * 9 / 5) + 32;
        if (celcius % range == 0)
        {
            printf("%5d %11.2f\n", celcius, farenheit);
        }
    }

    return 0;
}
