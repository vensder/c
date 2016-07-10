#include "square.h"
#include <stdio.h>
#include "line.h"

void newline(){
    printf("\n");
}

void square(int size){
    int i,j;
    
    line(size);

    for (i=1; i <= size-2; i+=1){
        printf("|");
            for (j=1; j <= size-2; j+=1) printf(" ");
        printf("|");
        newline();
    }

    line(size);
}
