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

int main()
{
	printf("Fahr \t Cels\n");
	for (int t = LOWER; t <= UPPER; t+=STEP){
		printf("%3d \t %3.0f \n", t, fahr_to_cels(t));
	}

	printf("Cels \t Fahr\n");
	for (int t = LOWER; t <= UPPER; t+=STEP){
		printf("%3d \t %3.0f \n", t, cels_to_fahr(t));
	}
}    
