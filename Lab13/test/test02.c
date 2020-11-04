#include <stdio.h>
#define MAX_STD_NUM 10

struct Student {
  int no;
  int id;
  char name[20];
  int score;
};

void printStudent(struct Student std) {
  printf("--------- No. %d ---------\n", std.no);
  printf("Student ID : %d\n", std.id);
  printf("Name       : %s\n", std.name);
  printf("Score      : %d\n", std.score);
}

void inputStudent(struct Student pstds[MAX_STD_NUM], int i) {
  pstds[i].no = i;
  printf("No. %d\tStudent ID : ", i);
  scanf("%d", &pstds[i].id);
  printf("\tName : ");
  scanf("%s", &pstds[i].name);
  printf("\tScore : ");
  scanf("%d", &pstds[i].score);
}

int main() {
  int N;
  printf("Enter the number of students : ");
  scanf("%d", &N);
  struct Student std[N];
  for (int i = 0; i < N; i++) {
    inputStudent(std, i);
  }
  printf("======== Students ========\n");
  for (int i = 0; i < N; i++) {
    printStudent(std[i]);
  }
}