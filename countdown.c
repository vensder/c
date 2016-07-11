#include <stdio.h>
#include <unistd.h>

int main() {
  int i, start, end;

  start = 1;
  end = 10;

   //reverse counting, we'll interchange loop variables

  for(i = end; i >= start; i--){
      printf("%d\n", i);
      sleep(1);
  }
 
  return 0;
}
