#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 0;

    while(1){

        if (c != 10)
            puts("Enter a character: ");

        scanf("%c", &c);

        if (c != 10)
            printf("ASCII value of %c is %d\n", c, c);

        if (c == 'q')
            break;
    }

    return 0;
}

