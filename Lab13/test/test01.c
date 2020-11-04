#include <stdio.h>

struct student {
  int id;
  char name[20];
  int score;
};

void get_student(struct student std[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("No. %d\tStudent ID : ", i+1);
    scanf("%d", &std[i].id);
    printf("\tName : ");
    scanf("%s", &std[i].name);
    printf("\tScore : ");
    scanf("%d", &std[i].score);
  }
}

void print_student(struct student std[], int n) {
  int i;
  printf("======== Students ========\n");
  for (i = 0; i < n; i++) {
    printf("--------- No. %d ---------\n", i+1);
    printf("Student ID : %d\n", std[i].id);
    printf("Name       : %s\n", std[i].name);
    printf("Score      : %d\n", std[i].score);
  }
}

int main() {
  int N;
  printf("Enter the number of students : ");
  scanf("%d", &N);
  struct student std[N];
  get_student(std, N);
  print_student(std, N);
  return 0;
}