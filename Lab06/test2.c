#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  // int b0, b2, b2, b3, b4, b5, b6, b7;
  // int dec1, dec2;
  int b1, b2;
  char h1, h2;
  printf("Input Binary Number (8 digits) : ");
  scanf("%4d%4d", &b1, &b2);
  printf("Binary number is %.4d%.4d\n", b1, b2);
  if (b1 == 0)
  {
    h1 = '0';
  }
  else if (b1 == 1)
  {
    h1 = '1';
  }
  else if (b1 == 10)
  {
    h1 = '2';
  }
  else if (b1 == 11)
  {
    h1 = '3';
  }
  else if (b1 == 100)
  {
    h1 = '4';
  }
  else if (b1 == 101)
  {
    h1 = '5';
  }
  else if (b1 == 110)
  {
    h1 = '6';
  }
  else if (b1 == 111)
  {
    h1 = '7';
  }
  else if (b1 == 1000)
  {
    h1 = '8';
  }
  else if (b1 == 1001)
  {
    h1 = '9';
  }
  else if (b1 == 1010)
  {
    h1 = 'A';
  }
  else if (b1 == 1011)
  {
    h1 = 'B';
  }
  else if (b1 == 1100)
  {
    h1 = 'C';
  }
  else if (b1 == 1101)
  {
    h1 = 'D';
  }
  else if (b1 == 1110)
  {
    h1 = 'E';
  }
  else if (b1 == 1111)
  {
    h1 = 'F';
  }

  if (b2 == 0)
  {
    h2 = '0';
  }
  else if (b2 == 1)
  {
    h2 = '1';
  }
  else if (b2 == 10)
  {
    h2 = '2';
  }
  else if (b2 == 11)
  {
    h2 = '3';
  }
  else if (b2 == 100)
  {
    h2 = '4';
  }
  else if (b2 == 101)
  {
    h2 = '5';
  }
  else if (b2 == 110)
  {
    h2 = '6';
  }
  else if (b2 == 111)
  {
    h2 = '7';
  }
  else if (b2 == 1000)
  {
    h2 = '8';
  }
  else if (b2 == 1001)
  {
    h2 = '9';
  }
  else if (b2 == 1010)
  {
    h2 = 'A';
  }
  else if (b2 == 1011)
  {
    h2 = 'B';
  }
  else if (b2 == 1100)
  {
    h2 = 'C';
  }
  else if (b2 == 1101)
  {
    h2 = 'D';
  }
  else if (b2 == 1110)
  {
    h2 = 'E';
  }
  else if (b2 == 1111)
  {
    h2 = 'F';
  }
  printf("Hexadecimal is %c%c", h1, h2);
}