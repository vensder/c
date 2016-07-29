#include <stdio.h>

int main(){

    int i3;
//    char i3;

    _Bool t = 1;
    _Bool f = 0;
    int x = 42;
    char c = 'h';
    char c105 = 255;
    char newline = '\n';
    float myfloat   = 3.33333333333333333333333333333333333333333333333;
    double mydouble = 3.33333333333333333333333333333333333333333333333;

//    x = 42;
//
    printf("my bool t is %d\n", t);
    printf("my bool f is %d\n", f);

    printf("My variable x = %d.\n", x);
    printf("size of x is %d\n", sizeof(x));
    printf("char c = %c.\n", c);
    printf("char c as int = %d\n", c);
    printf("sizeof c is %d\n", sizeof(c));
    printf("char c105 = %c.\n", c105);
    
    int digit = 1;
    printf("\nchar from digit %d is %c\n\n", digit, digit);



    printf("char newline = %c\n", newline);
    printf("char newline as int = %d\n", newline);

    printf("float myfloat   = %1.30f\n", myfloat);
    printf("double mydouble = %1.30f\n", mydouble);

    printf("5/2 as %%d is %d\n", 5/2);
    printf("5/2 as %%f is %f\n", 5/2);
    printf("5.0/2.0 as %%d is %d\n", 5.0/2.0);

    int i1 = 1; long l1 = 3; float f1 = 5.01; double d1 = 4.00000004;

    printf("%d\n%d\n%f\n%f\n", i1, l1, f1, d1);

    unsigned int k1 = -10;
    printf("k1 is %u\n", k1);

    return(0);
}
