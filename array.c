#include <stdio.h>

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int array10[10] = {0};
    int size, count, a;
    a = array[10];
    printf("a: %d\n", a);
    char hello[] = {'H', 'e', 'l', 'l', 'o'};
    char hello1[] = "Hello";
    size = sizeof(hello);
    printf("%s:%d\n", hello, size);
    size = sizeof(hello1);
    printf("%s:%d\n",hello1, size);
    size = sizeof(array);
    count = sizeof(array)/sizeof(array[0]);
    printf("%d, %d\n", size, count);
    int array1[1];
    size = sizeof(array1);
    printf("%d\n", size);
    int array0[0];
    size = sizeof(array0);
    printf("%d\n", size);

    char name[] = "Charly";
    printf("Sizeof name = %lu \n", sizeof(name));
    char *p;
    int i;
    for (i=0; i < sizeof(name); i++){
        p = &name[i];
        printf("*p = %c(%d) \n", *p, i);
    }



}
