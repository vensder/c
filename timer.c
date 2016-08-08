#include <stdio.h>
#include <unistd.h>

int time_sec;

int main(){

    printf("Sec:\n");

    for (time_sec = 0; ;time_sec++){
        sleep(1);
        printf("%4d\b\b\b\b", time_sec);
        fflush(stdout);
    }
}
