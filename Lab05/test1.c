#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int b0, b1, b2, b3, b4, b5, dec, oct, i = 1;
  printf("Enter Binary number (6 digits): ");
  scanf("%d %d %d %d %d %d", &b5, &b4, &b3, &b2, &b1, &b0);
  printf("Binary Number  = %d%d%d%d%d%d\n", b5, b4, b3, b2, b1, b0);

  dec = (b5*pow(2, 5))+(b4*pow(2, 4))+(b3*pow(2, 3))+(b2*pow(2, 2))+(b1*pow(2, 1))+(b0*pow(2, 0));
  oct = 0;
  printf("Decimal Number = %d\n", dec);
  while (dec != 0)
  {
    oct += (dec % 8) * i;
    dec /= 8;
    i *= 10;
  }
  printf("Octal Number = %d", oct);
}