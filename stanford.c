#include <stdio.h>

int main(){

    double d = 3.1415;
    char ch = *(char *)&d;

    short s = 99;
    double dd = *(double *)&s;
   
    printf("%c\n", ch); 
    printf("%f\n", dd);

    struct fraction{
        int num;
        int denum;
    };

    struct fraction pi;
    pi.num = 22;
    pi.denum = 7;

    int array[10];

    array[0] = 44;
    array[9] = 100;
    array[5] = 45;
//    array[10] = 1;
//    array[25] = 25;
//    array[-4] = 77;

    int x;
    int *p;

//    x = 0;
    p = &x;
    printf("x is %d, *p is %d, addr is %p \n", x, *p, p);
    *p = 1;
    printf("x is %d, *p is %d, addr is %p \n", x, *p, p);
    x = 0;
    printf("x is %d, *p is %d, addr is %p \n", x, *p, p);

    printf("Pointer address of p is: %p \n", &p);
   

}


