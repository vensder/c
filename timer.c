#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int max_duration_sec  = 0;

void bell(){
    printf("\a");
    fflush(stdout);
    sleep(1);
}

void beep(){
    for (int i = 0; i < 10; i++){
        printf("+++ BEEP +++\b\b\b\b\b\b\b\b\b\b\b\b");
        bell();
        printf("--- beep ---\b\b\b\b\b\b\b\b\b\b\b\b");
        bell();
    }
}

int main(int argc, char **argv){

    if ((argc > 1) && !(strcmp(argv[1],"--help"))){
        printf("Help\n");
        exit(0);
    }

    if (argc > 1){
        max_duration_sec = atoi(argv[1]);
        printf("max_duration_sec: %d\n", max_duration_sec);
    }

    printf("Sec:");

    for (int current_duration_sec = 1; ;current_duration_sec++){
        printf("%6d\b\b\b\b\b\b", current_duration_sec);
        fflush(stdout);
        sleep(1);
        if (max_duration_sec && current_duration_sec >= max_duration_sec){
            printf("\nDone!\n");
            //exit(0); // uncomment for testing: time ./timer 50;

            if (argc > 2) {
                    if (!strcmp(argv[2],"--beep")) beep();
                    else if (!strcmp(argv[2],"--popup")) system("zenity --info --text=\"It's time!\"");
            }
            
            break;
        }
    }
}
