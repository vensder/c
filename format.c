#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i+=10){
        printf("%23.20f\n", i/3.1415);
    }

    return 0;
}



