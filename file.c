#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file;
    file = fopen("myfile.txt", "a");
    printf("%lu \n", sizeof(file));

    if (file == NULL){
        printf("File opening return NULL\n");
        exit(1);
    }
    
    fprintf(file, "Hello from app to file!\n");
    fclose(file);
    getchar();
    return 0;
}
