#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double log, round;
    double x = 10000;     

    if (argc > 1)
        x = atoi(argv[1]);

    log = log10(x);
    round = floor(log);
    printf("%*.2lf, %d\n", 3, log, (int)round);

return(0);
}
