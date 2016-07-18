#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 10

/* print the table of temperatures by Fahrengeit
 * and Celsius for fahr = 0, 20, ..., 300 */

int main()
{
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 10;

    {
        int fahr, celsius;

        fahr = lower;
        while (fahr <= upper) {
        	celsius = 5 * (fahr - 32) / 9;
            printf("%3d %6d\n", fahr, celsius);
            fahr += step;
        }
    }

    printf("\n");

    {
        float fahr, celsius;

        for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
            celsius = (5.0/9.0) * (fahr - 32.0);
            printf ("%3.0f %6.1f\n", fahr, celsius);
        }

    }

}    
