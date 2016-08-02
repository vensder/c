#include <stdio.h>

int main(){

    const int DECADE = 10;

    int *p;
    int x;

    p = &DECADE;
    *p = 11;
    printf("DECADE = %d \n", DECADE);

    printf("p = %p \n", p);
    printf("*p = %d \n", *p);

    x = DECADE;
    p = &x;

    printf("p = %p \n", p);
    printf("*p = %d \n", *p);

}

