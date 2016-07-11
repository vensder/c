#include <stdio.h>

int main(){

    int a = 10;

    int *ptr = NULL;

    ptr = &a;
//    printf("%d",10);
//    printf("%d",a);
    printf("%d", *ptr);
    printf("\n");
    printf("%d", ptr);

}
