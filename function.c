#include <stdio.h>

int sum (int a, int b){
	return a + b;
}

int sub (int a, int b){
	return a - b;
}

int mul (int a, int b){ //multiplication via sum function

	int acc = 0;
	int summand = a;
	int count = b;
	
	if (a < b){
		summand = b;
		count = a;
	}
	
	for (int i = 0; i < count; i++){
		acc = sum(acc, summand);
	}

	return acc;
}

int main(){
	printf("a * b = %d\n", mul(100,100000));
}


