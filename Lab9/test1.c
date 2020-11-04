#include <stdio.h>

int main()
{
  int s, i;
  printf("Enter the size of array (A and B):");
  scanf("%d", &s);
  int data_a[s], data_b[s];
  printf("Enter elements of an array \"A\":\n");
  for (i = 0; i < s;++i)
  {
    printf("A[%d] = ", i);
    scanf("%d", &data_a[i]);
  }
  printf("Enter elements of an array \"B\":\n");
  for (i = 0; i < s;++i)
  {
    printf("B[%d] = ", i);
    scanf("%d", &data_b[i]);
  }
  printf("A + B is\n");
  for (i = 0; i < s;++i)
  {
    printf("A[%d] + B[%d] = %d\n", i, i, data_a[i]+data_b[i]);
  }
}