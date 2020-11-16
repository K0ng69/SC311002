#include <stdio.h>

int main()
{
  int a, b, temp;
  a = 10;
  b = 5;
  temp = a;
  a = b;
  b = temp;
  printf("A = %d, B = %d\n", a, b);
}