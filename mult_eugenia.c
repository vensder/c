#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int i,j, sz = 5;
    printf("Argc = %d\n", argc);

    if (argc > 1) {
        printf("Argv[1] = %s\n", argv[1]);
        sz = atoi(argv[1]);
    }

    for (i = 1; i <=sz; i=i+1){
        for (j = 1; j <= sz; j=j+1){
            printf("%3d ", i*j);
        }
        printf("\n");
    }

}