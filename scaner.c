#include <stdio.h>

int main(){

    unsigned char word;
    unsigned char *pword;
    unsigned long i = 0;

    for (word = 0; word < 255; word++)
        printf("0x%02X\n", word);

    printf("0x%02X\n", 255);

    pword = &word;
    printf("address = %p, word = 0x%02X \n", pword, *pword);

    for(;;pword++){
	   i++;
           if (*pword != 0)
           	printf("%lu. address = %p, word = 0x%02X \n", i, pword, *pword);
    }

}
