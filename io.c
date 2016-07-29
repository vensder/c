#include <stdio.h>
#define BREAK 'q'

int main();
void nl();

int main() {
    char c = '\0';
    printf("%c, %d", c, c);
    nl();
    while ((c = getchar()) != BREAK) {
        putchar (c);
    }    
    nl();
    printf("%d", c);
    nl();
    return 0;
}

void nl(){
    printf("\n");
}
