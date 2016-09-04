#include <stdio.h>
#include <string.h>

void print_line(char str[]){
    char *p_substr;
    char *p_splitter = ";";

    p_substr = strtok(str, p_splitter);
    printf("%s", p_substr);
    getchar();
    p_substr = strtok(NULL, p_splitter);
    printf("%s", p_substr);
    getchar();
}

int main(){
	FILE *file = fopen("input.csv", "r");
	int line = 0;
	char input[512];

	while(fgets(input, 512, file)){
		line++;
		print_line(input);
	}

	fclose(file);
}
