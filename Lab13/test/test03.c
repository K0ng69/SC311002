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

void search(int search_id,struct Student pstds[MAX_STD_NUM],int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (pstds[i].id == search_id) {
      printf("--------- No. %d ---------\n", pstds[i].no);
      printf("Student ID : %d\n", pstds[i].id);
      printf("Name       : %s\n", pstds[i].name);
      printf("Score      : %d\n", pstds[i].score);
    }
  }
}

int main() {
  int N, i;
  int search_id;
  char cont = 'n';
  printf("Enter the number of students : ");
  scanf("%d", &N);
  struct Student std[N];
  for (i = 0; i < N; i++) {
    inputStudent(std, i);
  }
  printf("======== Students ========\n");
  for (i = 0; i < N; i++) {
    printStudent(std[i]);
  }

  printf("======== Student search ========\n");
  do {
    printf("Enter Student ID : ");
    scanf("%d", &search_id);
    search(search_id, std, N);

    printf("Do you want to continue? (y/n) ");
    scanf("%*c%c", &cont);
  } while (cont == 'y' || cont == 'Y');
}
