#include <stdio.h>

int main()
{
  int n1, n2, n3, max;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  if (n1 > n2)
  {
    max = n1;
  }
  else
  {
    max = n2;
  }
  if (max < n3)
  {
    max = n3;
  }
  printf("The maximum number is %d\n", max);
}