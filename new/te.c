#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int N= 5, i;
  time_t t;
  srand((unsigned) time(&t));
  int g;
  for (i = 0; i < N; i++)
  {
    g = rand() % 10;
    printf("%d\n", g);
  }
  
}