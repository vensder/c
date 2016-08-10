#include <stdio.h>
#include <unistd.h>
//#include <string.h>
#include <stdlib.h>

int time_sec = 0;
int max_sec  = 0;

void bell(){
    printf("\a");
    fflush(stdout);
    sleep(1);
}

void beep(){
    for (int i = 0; i < 10; i++){
        printf("beep\b\b\b\b");
        bell();
        printf("BEEP\b\b\b\b");
        bell();
    }
}

int main(int argc, char *argv[]){

    if (argc > 1){
        max_sec = atoi(argv[1]);
        printf("max_sec: %d\n", max_sec);
    }

    printf("Sec:");

    for (time_sec = 1; ;time_sec++){
        sleep(1);
        printf("%6d\b\b\b\b\b\b", time_sec);
        fflush(stdout);
        if (max_sec && time_sec >= max_sec){
            printf("\nDone!\n");
//            exit(0); // for testing: time ./timer 50;
            beep();
            break;
        }
    }

    return 0;
}
