#include "line.h"
#include <stdio.h>

void line(int repeat){
    int i;
    for (i = 1; i <= repeat; i += 1) printf("=");
    printf("\n");
}
