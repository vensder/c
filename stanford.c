#include <stdio.h>
#include <string.h>


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
    
    printf("Address of variable x is: %p \n", &x);
    printf("Address of pointer  p is: %p \n", &p);

    int *pp;
    int *pppp;
//    *pp = 32;
    printf("pp is %p \n", pp);
    printf("*pp is %d \n", *pp);
//    printf("%p\n", pppp);
//    printf("%d\n", *pppp);

//    int *ppp;
//    *ppp = 64;
//    printf("ppp is %p \n", ppp);
//    printf("*ppp is %d \n", *ppp);
    
    int zzz = 33;
    printf("zzz is %d \n", zzz);

    int arr[5];
    int i;
    for (i = 0; i <5; i++){
        printf("arr[%d] is %d \n", i, arr[i]);
    }

    struct students{
      char *name;
      char suid[8]; 
      int numUnits;
    };

    struct students pupils[4];
    pupils[0].numUnits = 21;
    pupils[2].name = strdup("Adam");
    pupils[1].name = "Adam";

    //printf("%s\n, pupils[1].name");

    x = 1;
    x += x++ + ++x;
    printf("x is %d\n", x);


}


