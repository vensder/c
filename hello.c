#include "hello.h"
#include "line.h"
#include "square.h"
#include <stdio.h>

void hello()
{
    line(20);
    printf("Hello from hello.c!\n");
    line(20);
    square(10);
    square(20);
}
