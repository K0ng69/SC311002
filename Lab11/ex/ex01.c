#include <stdio.h>

void printNum(int a, int b)
{
  printf("var1 = %d, var2 = %d\n", a, b);
}

void swapA(int a, int b)
{
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
  printNum(a, b);
}

void swapB(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
  printNum(*a, *b);
}

void printNumStr(int a, int b, char *str)
{
  printf("str = %s\n", str);
  printNum(a, b);
}

int main()
{
  int a = 5, b = 10;
  printf("Before swapA\n");
  swapA(a, b);
  printf("After swapA\n");
  printNum(a, b);

  printf("Before swapB\n");
  swapB(&a, &b);
  printf("After swapB\n");
  printNum(a, b);

  char name[20] = "hahaha";
  printNumStr(a, b, name);
}