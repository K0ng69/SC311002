#include <stdio.h>
#include <stdlib.h>

typedef struct StPerson {
  int id;
  char fname[20];
  char lname[20];
}Person;

int main(){

  int N = 3;
  int i;
  Person ps[N];


  FILE *fp;
  // fp = fopen("data.csv", "w");

  // if (fp == NULL) {
  //   printf("Error: Cannot open file.");
  //   exit(-1);
  // }

  // printf("----Enter person data----\n");
  // for (i = 0; i < N;i++) {
  //   printf("Enter id : ");
  //   scanf("%d", &ps[i].id);
  //   printf("Enter fname : ");
  //   scanf("%s", &ps[i].fname);
  //   printf("Enter lname : ");
  //   scanf("%s", &ps[i].lname);
  // }

  // for (i = 0; i < N; i++) {
  //   // printf("%d %s %s\n", ps[i].id, ps[i].fname, ps[i].lname);
  //   fprintf(fp, "%d,%s,%s\n", ps[i].id, ps[i].fname, ps[i].lname);
  // } 

  // fclose(fp);

  // FILE *fp;
  fp = fopen("data.csv", "r");

  if (fp == NULL) {
    printf("Error: Cannot open file.");
    exit(-1);
  }

  int id = 0;
  char fname[20];
  char lname[20];
  int st = 0;

  while (fscanf(fp, "%d %s %s", &id, fname, lname) != EOF) {

    printf("%d %s %s\n", id, fname, lname);
  }
  // st = fscanf(fp, "%d %s %s", &id, fname, lname);
  // printf("st = %d\n", st);


  fclose(fp);
}