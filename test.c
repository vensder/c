#include <stdio.h>

int main()
{
    int cc;

    printf("%f\n", 6/55.0);
    cc = getchar();
    printf("%d\n", cc);
    putchar (cc);
    printf("\n");

    char a,b,c,d;
    a = 'W';
    b = a +24;
    c = b + 8;
    d = '\n';
    printf("%c%c%c%c", a,b,c,d);

}
