#include <stdio.h>

int main(){
    int size;
    int a = 10;

    int *ptr = NULL;
    size = sizeof(ptr);
    printf("%d\n", size);
    ptr = &a;
//    printf("%d",10);
//    printf("%d",a);
    printf("%d\n", *ptr);
    printf("%p\n", ptr);

}
