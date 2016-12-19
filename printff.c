#include <stdio.h>

int main() {

	char *f = "%s\n";
	printf(f,"test");
	printf(f, "test2");
	printf(f, f);
}
