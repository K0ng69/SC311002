#include <stdio.h>

int main()
{
  int c=0, j, position, length;
  char kong[100], sub[100];
  printf("enter");
  scanf("%s", kong);
  printf("Enter the position and length of substring\n");
  scanf("%d%d", &position, &length);

  while (c < length) {
    sub[c] = kong[position+c-1];
    c++;
  }
  sub[c] = '\0';

  printf("Required substring is \"%s\"\n", sub);
}