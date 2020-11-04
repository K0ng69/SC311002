#include <stdio.h>

int main()
{
  char c;
  printf("Enter a character:");
  scanf("%c", &c);
  // printf("%d", c); 
  if (c >= 48 && c <= 57)
  {
    printf("%c is a digit.", c);
  }
  else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
  {
    printf("%c is an alphabetic.", c);
  }
  else if ((c >= 42 && c <= 43) || (c == 45) || (c == 47))
  {
    printf("%c is an operator.", c);
  }
  else
  {
    printf("%c is undetermined.", c);
  }
}