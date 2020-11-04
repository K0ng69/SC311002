#include <stdio.h>

int main() {
  int N, i, total;
  float w_total=0, m_total=0, f_total=0, a_total=0;
  float avg;
  printf("Enter the number of students :");
  scanf("%d", &N);
  int std[N][2];
  for (i = 0; i < N; i++) {
    printf("Enter score of student #%d [work midterm final]:", i+1);
    scanf("%d %d %d", &std[i][0], &std[i][1], &std[i][2]);
  }
  printf("Name\t\tW(20)\tM(40)\tF(40)\tTotal (100)");
  for (i = 0; i < N; i++) {
    total = std[i][0] + std[i][1] + std[i][2];
    w_total+=std[i][0];
    m_total+=std[i][1];
    f_total+=std[i][2];
    a_total+=total;
    // avg = (float)total / 3;
    printf("\nstudent #%d\t%d\t%d\t%d\t%d", i+1, std[i][0], std[i][1], std[i][2], total);
  }
  printf("\nMean\t\t%d\t%d\t%d\t%d", w_total/N, m_total/N, f_total/N, a_total/N);
}