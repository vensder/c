#include <stdio.h>
//#include <time.h>
#include <unistd.h>


int main(){

    printf("Countdown: \n");
    for (int i = 0; i <= 10; i++){
        usleep(400000);
        printf("======> %d\r", i);
        fflush(stdout);
    }

    char hello[] = "Press Enter for the explosion!";
    printf("%s", hello);

    getchar();

    for (int i = 0; i < 100; i++){
        usleep(30000);
        printf("->\b");
        fflush(stdout);
    }

    printf("\nFinished!\n");


    return 0;
}
