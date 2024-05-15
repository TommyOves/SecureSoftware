#include <stdlib.h>
#include <stdio.h>

int func(int n, int y){
   printf("%d, %d, %d, %d\n",n, y, n+y, y-n);
   return 0;
}


int main(void){
  return func(72, 32);
}
