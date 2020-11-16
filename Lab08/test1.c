#include <stdio.h>
#include <math.h>
int main()
{
  char opt, cont = 'y';
  float n1, n2, result;
  while (cont == 'y' || cont == 'Y')
  {
    printf("Input Decimal Number1: ");
    scanf("%f", &n1);
    printf("Input Decimal Number2: ");
    scanf("%f", &n2);
    printf("Press Operator do you want to Process (+,-,*,/,^ ): ");
    scanf("%*c%c", &opt);
    if (opt == '+')
    {
      result = n1 + n2;
    }
    else if (opt == '-')
    {
      result = n1 - n2;
    }
    else if (opt == '*')
    {
      result = n1 * n2;
    }
    else if (opt == '/')
    {
      result = n1 / n2;
    }
    else if (opt == '^')
    {
      result = pow(n1, n2);
    }
    printf("Result %g %c %g = %g\n", n1, opt, n2, result);
    printf("Do you want to continue? (y/n) ");
    scanf("%*c%c", &cont);
  }
}