#include <stdio.h>
#include <string.h>

int main()
{
  char txt[50];
  int i;
  int a=0, e=0, ii=0, o=0, u=0;
  printf("Enter word:");
  scanf("%s", txt);
  printf("%s", txt);

  for (i = 0; i < strlen(txt); ++i)
  {
    if (txt[i] == 'a')
    {
      a++;
    }
    else if (txt[i] == 'e')
    {
      e++;
    }
    else if (txt[i] == 'i')
    {
      ii++;
    }
    else if (txt[i] == 'o')
    {
      o++;
    }
    else if (txt[i] == 'u')
    {
      u++;
    }
  }
  printf("\na:");
  for (i = 0; i < a; ++i)
    {printf("*");}
  printf("\ne:");
  for (i = 0; i < e; ++i)
    {printf("*");}
  printf("\ni:");
  for (i = 0; i < ii; ++i)
    {printf("*");}
  printf("\no:");
  for (i = 0; i < o; ++i)
    {printf("*");}
  printf("\nu:");
  for (i = 0; i < u; ++i)
    {printf("*");}

}