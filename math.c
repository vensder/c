#include <stdio.h>

#define PI 355.0/113
#define TEXT "Hello there! How is it going?\n"
#define define "define"
//#define define define

int main(){

    printf("Число Пи: %f\n", 355.0/113.0);
    printf("Число Пи: %f\n", PI);
    printf(TEXT);
    printf(define);
    printf("\n");
//    printf("Bafsadfasdf" + "2134213423412\n");


    printf("%d\n", 3/4);
    printf("%d\n", 7/2);
    printf("%f\n", 0+50*1-60-60*0+10.0);
    printf("%f\n", 160+17.0);
    printf("%f\n", 16.0+17);
    printf("%f\n", 16+17.0);

    printf("%d\n", 3/4);
    printf("%d\n", 7/2);
    printf("%d\n", 7%2);

    int x = 3; int y;
    printf("x = %d, y = %d \n", x, y = ++x);

    return 0;
}
