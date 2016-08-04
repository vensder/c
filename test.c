#include <stdio.h>
#include <limits.h>

int main()
{   
    printf("%u\n", UINT_MAX);

    unsigned i,j;
    for (i=0; i < UINT_MAX; i++)
      for (j=0; j < UINT_MAX; j++){
        putchar('.');
        putchar('-');
        putchar('=');
        putchar('+');
    	fflush(stdout);
      }

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
