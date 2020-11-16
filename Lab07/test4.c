#include <stdio.h>

int main()
{
  int n1, n2, n3;
  int temp1, temp2, temp3;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  if ((n1 > n2) && (n1 > n3))
  {
    temp3 = n1;
    if (n2 > n3)
    {
      temp2 = n2;
      temp1 = n3;
    }
    else
    {
      temp2 = n3;
      temp1 = n2;
    }
  }
  else if ((n2 > n3) && (n2 > n1))
  {
    temp3 = n2;
    if (n3 > n1)
    {
      temp2 = n3;
      temp1 = n1;
    }
    else
    {
      temp2 = n1;
      temp1 = n3;
    }
  }
  else
  {
    temp3 = n3;
    if (n2 > n1)
    {
      temp2 = n2;
      temp1 = n1;
    }
    else
    {
      temp2 = n1;
      temp1 = n2;
    }
  }
  printf("Sorted output: %d %d %d", temp1, temp2, temp3);
}