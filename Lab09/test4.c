#include <stdio.h>
#include <math.h>

float calculateSD(float data[], int n) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i][n];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / 10);
}

int main() {
  int N, i, total;
  float w_total=0, m_total=0, f_total=0, a_total=0;
  float avg;
  printf("Enter the number of students :");
  scanf("%d", &N);
  int std[N][4];
  for (i = 0; i < N; i++) {
    printf("Enter score of student #%d [work midterm final]:", i+1);
    scanf("%d %d %d", &std[i][0], &std[i][1], &std[i][2]);
  }
  printf("Name\t\tW(20)\tM(40)\tF(40)\tTotal (100)");

  for (i = 0; i < N; i++) {
    // printf("\n%d\n",i);
    std[i][4] = std[i][0] + std[i][1] + std[i][2];
    w_total+=std[i][0];
    m_total+=std[i][1];
    f_total+=std[i][2];
    a_total+=total;
    avg = (float)total / 3;
    // printf("%d\n", std[i][2]);
    printf("\nstudent #%d\t%d\t%d\t%d\t%d", i+1, std[i][0], std[i][1], std[i][2], std[i][4]);
  }
  printf("\nMean\t\t%.2f\t%.2f\t%.2f\t%.2f", w_total/N,
                                            m_total/N, 
                                            f_total/N, 
                                            a_total/N);

  // float sd_w = calculateSD(std);        
  for (i = 0; i < N; i++) {
    printf("\nS.D.\t\t%.2f\t%.2f\t%.2f\t%.2f\t", calculateSD(std), calculateSD(std), calculateSD(std))
  }

}