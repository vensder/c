#include <stdio.h>
#include <string.h>

int count_lines(FILE *fp){
  int ch = 0;
  int lines = 0;

  while(!feof(fp))
  {
    ch = fgetc(fp);
    if(ch == '\n')
    {
      lines++;
    }
  }
  return(lines);
}

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
	FILE *fp = fopen("input.csv", "r");
	printf("Number of lines in file: %d\n", count_lines(fp));
	int line = 0;
	char input[512];

	while(fgets(input, 512, fp)){
		line++;
		print_line(input);
	}

	fclose(fp);
}
