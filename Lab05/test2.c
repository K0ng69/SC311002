#include <stdio.h>
#include <math.h>

int main()
{
  int b3, b2, b1, b0, f3, f2, f1, f0, dec;
  float fdec;
  printf("Enter Binary floating point (bbbb.ffff): ");
  scanf("%d %d %d %d%d %d %d %d", &b3, &b2, &b1, &b0, &f3, &f2, &f1, &f0);
  printf("Binary = %d%d%d%d.%d%d%d%d\n",b3, b2, b1, b0, f3, f2, f1, f0);

  dec = (b3 * pow(2, 3)) + (b2 * pow(2, 2)) + (b1 * pow(2, 1)) + (b0 * pow(2, 0));
  fdec = (f3 * pow(2, -1)) + (f2 * pow(2, -2)) + (f1 * pow(2, -3)) + (f0 * pow(2, -4));
  printf("Decimal = %f", dec+fdec);
}