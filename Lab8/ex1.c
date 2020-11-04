#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  srand(time(0));
  int rn = rand() % 3;
  printf("rn = %d\n", rn);
}