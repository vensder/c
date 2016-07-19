#include <stdio.h>

#define LOWER 1
#define UPPER 19

int main()
{
    int i,j;
    int array[UPPER+1][UPPER+1]; // = {{0},{0}};

    for (i = 0; i <= UPPER; i++)
        for (j = 0; j <= UPPER; j++)
            array[i][j] = i * j;

    for (i = LOWER; i <= UPPER; i++){
        for (j = LOWER; j <= UPPER; j++){
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }

}


