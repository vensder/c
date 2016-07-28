#include <stdio.h>
#include <unistd.h>
//#include <time.h>

#define DELAY 400000

int main(){
    printf("1111111\n");
    usleep(DELAY);
    printf("12345\n");
    usleep(DELAY);
    printf("2222222\n");
    usleep(DELAY);
//    printf("\b");
//    sleep(1);
//    printf("54321\b\b");

    return 0;

}
