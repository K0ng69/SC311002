#include <stdio.h>

int main()
{
  int n1, n2, n3, n4, n5;
  printf("Enter a number : ");
  scanf("%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5);
  printf("Output string : %c%c%c%c%c", n1+64, n2+64, n3+64, n4+64, n5+64);
}