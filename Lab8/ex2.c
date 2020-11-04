#include <stdio.h>

int main() 
{
  int ch;
  printf("Enter ch : ");
  scanf("%c", &ch);

  while (ch != 'e')
  {
    printf("Enter ch : ");
    scanf("%c", &ch);
  }
}