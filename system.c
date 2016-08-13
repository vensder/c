#include <stdlib.h> //system
#include <stdio.h> //printf

int main(){
	int ret_val;
	char uname[20];

	FILE *fp = popen("uname", "r");
	fscanf(fp, "%s", uname);
	pclose(fp);
	printf("uname: %s\n", uname);
	exit(0);

	if (!system("which zenity > /dev/null")){
		ret_val = system("zenity --info --text=Hello");
		printf("%d\n", ret_val);
	}

	if (!system("which osascript > /dev/null")){
		ret_val = system("osascript -e 'display dialog \"It is TIME\"'");
		printf("%d\n", ret_val);
	}

}
