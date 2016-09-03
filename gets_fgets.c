#include <stdio.h>

int main(){
	char word[10];
	
	printf("Input any word:\n");
	fgets(word, 10, stdin);
	printf("%s\n", word);

	printf("Input another word:\n");
	gets(word); //unsafe funcion
	printf("%s\n", word);
}
