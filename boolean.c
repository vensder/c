#include <stdio.h>

void print_res(int x){
    printf("x = %d\n", x);
}

int main()
{
    int x;
    
    x = (5 > 7) || (3 < 8);
    print_res(x);

    x = !7;
    print_res(x);

    print_res(x = !0);

    print_res(x/0);

    return 0;
}


