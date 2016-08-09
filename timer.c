#include <stdio.h>
#include <unistd.h>
//#include "beep.h"

int time_sec;

int main(){

    printf("Sec:");

    for (time_sec = 0; ;time_sec++){
        sleep(1);
        printf("%6d\b\b\b\b\b\b", time_sec);
        fflush(stdout);
    }
}
