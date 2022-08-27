#include <stdio.h>

int add3(int a, int b, int c){
  int result = a + b + c;
  return result;
}

int main() {
  int myNumber =0;
  int other;
  float areanumber = 4.5;
  int result;

  myNumber = 20;
  other = 17;
  result = myNumber + other / areanumber;

  printf("Hello World %i %i %i %f\n",myNumber, other, result, areanumber);
  printf("add3 = %i\n",add3(15,12,6));
}
