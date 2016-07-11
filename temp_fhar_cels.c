#include <stdio.h>

/* print the table of temperatures by Fahrengeit
 * and Celsius for fahr = 0, 20, ..., 300 */

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 3000;
    step = 1;

    fahr = lower;
    while (fahr <= upper) {
	celsius = 5 * (fahr - 32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr += step;
    }
}    
