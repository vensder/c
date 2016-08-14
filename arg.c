#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 1){
        printf("Quantity of args is %d:\n", argc-1);

	for (int i = 1; i < argc; i++){
            printf("%d: %s; ", i, argv[i]);
        }
	printf("\n");

	for (char **p=argv; *p!=NULL; p++)
		printf("%s\n", p[0]);
    }
}
