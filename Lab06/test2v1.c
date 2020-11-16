#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  char cb0, cb1, cb2, cb3, cb4, cb5, cb6, cb7;
  int dec;
  printf("Input Binary Number (8 digits) : ");
  scanf("%c%c%c%c%c%c%c%c",&cb7, &cb6, &cb5, &cb4, &cb3, &cb2, &cb1, &cb0);
  int b0 = cb0 - '0', b1 = cb1 - '0', b2 = cb2 - '0', b3 = cb3 - '0', b4 = cb4 - '0', b5 = cb5 - '0', b6 = cb6 - '0', b7 = cb7 - '0';
  dec = (b7*pow(2, 7))+(b6*pow(2, 6))+(b5*pow(2, 5))+(b4*pow(2, 4))+(b3*pow(2, 3))+(b2*pow(2, 2))+(b1*pow(2, 1))+(b0*pow(2, 0));

  // printf("%d\n", dec);
  printf("Binary number is %d%d%d%d%d%d%d%d\n",b7, b6, b5, b4, b3, b2, b1, b0);
  printf("Hexadecimal is %.2X", dec);
}