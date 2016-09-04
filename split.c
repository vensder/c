#include <stdio.h>
#include <string.h>

int main(){
	char *p_substr;
	char str[] = "apple;яблоко";
	char *p_splitter = ";";

	p_substr = strtok(str, p_splitter);
	printf("%s\n", p_substr);
	p_substr = strtok(NULL, p_splitter);
	printf("%s\n", p_substr);
}
