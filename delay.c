#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
#include <time.h>

int main()
{
    int i;
    struct timespec tw = {0, 125000000}; // {sec, nanosec}
    //struct timespec tr; // = {0, 0};
    printf("%d nanoseconds\n", tw.tv_nsec);
    puts("Go ahead!");

    for (i = 0; i <= 10; i++){
        printf("%d. Hello world!\n", i);
        //sleep(1);
        //usleep(100000); // suspend execution for microsecond intervals
        nanosleep(&tw, NULL);
        //printf("%d,%d\n", tw);
    }

    return 0;
}
