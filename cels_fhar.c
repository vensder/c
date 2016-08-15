#include <stdio.h>

#define LOWER -30
#define UPPER 100
#define STEP 10

/* print the table of temperatures by Fahrengeit
 * and Celsius for fahr = 0, 20, ..., 300 */

float fahr_to_cels(int f){
	return (5.0/9.0) * (f - 32.0);
}

float cels_to_fahr(int c){
	return (9.0/5.0) * c + 32.0;
}

void print_line(){
	printf("------------||------------\n");
}

void print_head(){
	printf("Cels  Fahr  ||  Fahr  Cels\n");
}

int main()
{
	print_line();
	print_head();
	print_line();
	for (int t = LOWER; t <= UPPER; t+=STEP){
		printf("%4d  %4.0f  ||  ", t, cels_to_fahr(t));
		printf("%4d  %4.0f\n", t, fahr_to_cels(t));
	}

	print_line();
}    
