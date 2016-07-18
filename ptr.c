#include <stdio.h>

int main(){
    int size;
    int a = 10;

    int *ptr = NULL;
    size = sizeof(ptr);
    printf("%d\n", size);
    ptr = &a;
    size = sizeof(ptr);
    printf("%d\n", size);
    printf("%d\n", *ptr);
    printf("%p\n", ptr);

}
