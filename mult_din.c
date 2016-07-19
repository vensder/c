#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j;
    int upper = 9;

    if (argc > 1){
        upper = atoi(argv[1]);
    }

    for (i = 1; i <= upper; i++){
        for (j = 1; j <= upper; j++){
            printf("%3d ", i * j);
        }
        printf("\n");
    }

    return 0;
}


