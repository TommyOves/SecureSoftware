int func(int n){
   int x = n;
   int *y = &x;
   int *z = y + 1;
   return *y;
}


int main(void){
  return func(7);
}
