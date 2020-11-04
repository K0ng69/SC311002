#include <stdio.h>
#define N 50
#define row 50
#define col 50


void printData(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Data [%d] = %d\n", i, a[i]);
  }
}

void getData(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("Enter [%d] :", i);
    scanf("%d", &a[i]);
  }
}

float avg(int a[], int n)
{
  int sum = 0;
  int i;
  float avg;
  for (i = 0; i < n; i++)
  {
    sum += a[i];
  }
  avg = (float) sum / n;
  return avg;
}

float avgP(int *a, int n)
{
  int sum = 0;
  int i;
  float avg;
  for (i = 0; i < n; i++)
  {
    sum += *a;
    a++;
  }
  avg = (float) sum / n;
  return avg;
}

// void printM(int a[row][col], int r, int c);

int main()
{
  int a[N];
  int b[N];
  int n;
  float avgA, avgB;

  printf("Enter n :\n");
  scanf("%d", &n);
  printf("Enter a :\n");
  getData(a, n);
  printf("Enter b :\n");
  getData(b, n);

  printf("a =\n");
  printData(a, n);
  printf("b =\n");
  printData(b, n);

  avgA = avg(a, n);
  avgB = avg(b, n);

  printf("avgA = %.2f\n", avgA);
  printf("avgB = %.2f\n", avgB);

  avgA = avgP(a, n);
  avgB = avgP(b, n);
  printf("avgA = %.2f\n", avgA);
  printf("avgB = %.2f\n", avgB);
}