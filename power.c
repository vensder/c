#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
    int i;

    for (i=1; i <=10; i++){
        printf("%2d power of 2: %4f", i, pow(2, i));
    }


    return(0);
}
