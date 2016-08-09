#include <stdio.h>
#include <unistd.h>

void bell(){
    printf("\a");
    fflush(stdout);
    sleep(1);
}

int main(){

    for (int i = 0; i < 10; i++){
        printf("beep\b\b\b\b");
        bell();
        printf("BEEP\b\b\b\b");
        bell();
    }

    return 0;
}
