#include <stdio.h>

int main(){

    const int DECADE = 10;
    int *p;
    int x;
    p = &DECADE;
    *p = 11;
    printf("DECADE = %d \n", DECADE);

    printf("p = %p \n", p);
    printf("*p = %d \n", *p);

    x = DECADE;
    p = &x;

    printf("p = %p \n", p);
    printf("*p = %d \n", *p);

    int a = 7, b= 17;
    int *pa, *pb;

    pa = &a; pb = &b;
    printf("a = %d, b = %d \n", a, b);
    printf("*pa = %d, *pb = %d \n", *pa, *pb);
    pa = &b; pb = &a;
    printf("*pa = %d, *pb = %d \n", *pa, *pb);

    int array[2] = {7,17};
    int *parray[2];

    parray[0] = &array[0]; parray[1] = &array[1];
    printf("%d, %d \n", *parray[0], *parray[1]);    
    parray[0]++; parray[1]--;
    printf("%d, %d \n", *parray[0], *parray[1]);



    printf("linux = %d \n", linux);

}

