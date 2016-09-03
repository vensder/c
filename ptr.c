#include <stdio.h>

int main(){
    int size;
    int a = 10;

    int *ptr = NULL;
    size = sizeof(ptr);
    printf("Size of pointer before assigning: %d\n", size);
    ptr = &a;
    size = sizeof(ptr);
    printf("Size of pointer after dereferensing: %d\n", size);
    printf("Value of pointer: %d\n", *ptr);
    printf("Address of pointer: %p\n", ptr);

}
