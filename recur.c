#include <stdio.h>

int i = 0;

int main(){
    printf("%d\n", i);
    i++;
    main();
    return 0;
}
