#include <stdio.h>

int main()
{
  int i, j;
  printf("Hello : ");
  scanf("%d%*c%d", &i, &j);
  printf("%d.%d", i, j);
}