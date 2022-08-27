#include <stdio.h>

int main() {
  int v[5] = {1,2,3,4,5};
  int *p = v;
  int counter = 0;
  while (counter < 5){
    printf("v[%i] = %i\n",*p, v[*p]);
    p = p +1;
  }

  return 0;
}
