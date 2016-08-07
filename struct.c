#include <stdio.h>

struct Test{
	int a;
	int b;
	int c;
};

int main()
{
	struct Test t;
	t.a = 2;
	t.b = 4;
	t.c = t.a * t.b;
	printf("t.c = %d\n", t.c);

}

