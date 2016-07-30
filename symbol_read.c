#include <stdio.h>

int main(){
    int a,b,c,d;

    printf("I'm waiting for a symbol: ");
    c = getchar();
    printf("I'v got the symbol: '%c'.\n", c);

    printf("%c\n", (c = getchar())); //??


    printf("Let's again: \n");
    c = getc(stdin);
    printf("I'v got the symbol: '%c'.\n", c);

    printf("I'm waiting for a three symbols - 'a', 'b' and 'c':\n");

    a = getchar();
    b = getchar();
    d = getchar();

    printf("Three symbols: %c, %c, %c \n", a, b, d);

    printf("Press the Enter for quit: \n");
    getchar();

    return(0);
}
