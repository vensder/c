#include <stdio.h>

int lsearch(int key, int array[], int size);

int main(){

    int myarray[]={9,8,7,4,3,2};
    int result;
    int size;

    size = sizeof(myarray)/sizeof(myarray[0]);
    result = lsearch(7, myarray, size);
    printf("Position of arg is: %d\n", result+1);

    return 0;
}

int lsearch(int key, 
        int array[],
        int size)
{
    for (int i = 0; i < size; i++){
        if (array[i] == key)
            return i;
    }

    return -1;

}

