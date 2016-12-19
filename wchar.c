#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>


int main() {
    wchar_t myword[] = L"Наслаждайся кубинским апельсином";
    printf("%li\n", wcslen(myword));

    wchar_t myword1[11];
    wcsncpy(myword1, myword, 11);

    setlocale(LC_ALL, "en_US.utf8");
    printf("%ls\n", myword1);
}
