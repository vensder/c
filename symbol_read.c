#include <stdio.h>

int main(){
    int c;

    printf("I'm waiting for a symbol: ");
    c = getchar();
    printf("I'v got the symbol: '%c'.\n", c);

    printf("%c\n", (c = getchar())); //??


    printf("Let's again: \n");
    c = getc(stdin);
    printf("I'v got the symbol: '%c'.\n", c);

    return(0);
}
