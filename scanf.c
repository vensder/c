#include <stdio.h>

int main(){
    
    char buffer[20];
    float f;

    printf("Input anything: \n");
    puts("Hello\n");
    scanf("%s", buffer);
    puts("Hello2\n");
    printf("%s \n", buffer);

    printf("Input float: \n");
    scanf("%f", &f);
    printf("%.1f \n", f);

    int  n;
    while (scanf("%d", &n) == 1)
        printf("%d\n", n);

    char  word[20];
    if (scanf("%s", word) == 1)
        puts(word);

    return 0;
}
