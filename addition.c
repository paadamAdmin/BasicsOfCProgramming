#include <stdio.h>

// To execute C, please define "int main()"

int add(int a, int b) {
  return a+b;
}

int main() {
  int a = 2;
  int b = 3;
  int c = 0;
  c = add(2, 3);
  printf("Sum of two numbers %d and %d is %d \n", a, b, c);
  return 0;
}
