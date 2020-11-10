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

  printf("----Enter person data----\n");
  for (i = 0; i < N;i++) {
    printf("Enter id : ");
    scanf("%d", &ps[i].id);
    printf("Enter fname : ");
    scanf("%s", &ps[i].fname);
    printf("Enter lname : ");
    scanf("%s", &ps[i].lname);
  }

  for (i = 0; i < N; i++) {
    printf("%d %s %s\n", ps[i].id, ps[i].fname, ps[i].lname);
  } 
  return 0;
}