#include <stdio.h>
#include <stdlib.h>

//multiplication table

int main(int argc, char *argv[])
{
    int i,j;
    int upper = 9; //default size of table

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


