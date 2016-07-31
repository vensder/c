#include <stdio.h>
#include <time.h>

void nl();

int main() {
    int ch = '=';

    printf("Press Enter: \n");
    ch = getchar();
    putchar(ch);
    sleep(1);
    printf(">");
    nl();
    sleep(1);
    putchar(ch);
    sleep(1);
    printf(">");
    nl();
    return(0);
}

void nl(){
    printf("\n");
}
