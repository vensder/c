#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strtok - string tokens

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok;
            tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}

int main()
{
    FILE* stream = fopen("input.csv", "r");

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        printf("%s", getfield(tmp, 1));
	    free(tmp);
	    getchar();
	    tmp = strdup(line);
        printf("%s", getfield(tmp, 2));
	    printf("\n-----------");
        // NOTE strtok clobbers tmp
        free(tmp);
	    getchar();
    }
}
