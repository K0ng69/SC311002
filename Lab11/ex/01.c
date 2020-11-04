#include <stdio.h>
#define row 10
#define col 10
int printData(int a[row][col], int r, int c)
{
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}

int swap(int a[row][col], int r, int c)
{
  int tmp;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      tmp = a[i][j];
      a[i][j] = a[c][j];
    }
  }
}

int getData(int a[row][col], int r, int c)
{
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }
}

int main()
{
  int m, n;
  printf("Enter row and column of matrix A and B (m n): ");
  scanf("%d %d",&m, &n);
  int data[row][col];
  getData(data, m, n);
  printData(data, m, n);
}