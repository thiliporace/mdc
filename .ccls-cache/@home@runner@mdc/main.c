#include <stdio.h>

int mdc(int x, int y){
  if ( y <= x && x % y == 0)
    return y;
  if (x < y)
    return mdc(y,x);
  return mdc(y, x % y);
}

int main() {
  printf("%i",mdc(270,192));
}