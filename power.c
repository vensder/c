#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// print 2 ^ x for arg = x (or fo 10 without args)
// gcc power.c -o power -lm

int main(int argc, char *argv[])
{
    int i, width;
    int upper = 10;
    double max;

    if (argc > 1)
        upper = atoi(argv[1]);
    
    max = pow(2,upper);
    width = (int)(floor(log10(max)) + 1.0);

    printf("max: %.0lf, width: %d\n", max, width);

    for (i=1; i <= upper; i++){
        printf("2 ^ %2d: %*.0lf\n", i, width, pow(2, i));
    }

    return(0);
}
