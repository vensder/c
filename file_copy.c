#include <stdio.h>

int main()
{
    {
        // file copy: v.1
        int c;

        printf("EOF is: %d\n", EOF);

        c = getchar();

        while (c != EOF) {
            putchar (c);
            if ((c = getchar()) == 'q'){
                printf("\nExit from first loop\n");
                break;
            }
        }
    }

/////////////////////////
 
    {
        //file copy; v.2
        int c;

        while ((c = getchar()) != EOF){
            if (c == 'q')
                break;
            putchar(c);
        }
    }

return 0;

}

