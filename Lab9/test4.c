#include <stdio.h>

int main() {
  int N, i;
  printf("Enter the number of students :");
  scanf("%d", &N);
  int std[N][2];
  for (i = 0; i < N; i++) {
    printf("Enter score of student #%d [work midterm final]:");
    scanf("%d %d %d", &std[i][0], &std[i][1], &std[2]);
  }
}