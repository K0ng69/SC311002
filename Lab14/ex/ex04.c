#include <stdio.h>
#include <stdlib.h>

typedef struct StPerson {
  int id;
  char fname[20];
  char lname[20];
}Person;


int main(){

  Person p1 = {1001, "name1", "lname1"};
  Person p2 = {1002, "name2", "lname2"};
  Person p3;


  FILE *fp;
  fp = fopen("data02.txt", "r");

  if (fp == NULL) {
    printf("Error: Cannot open file.");
    exit(-1);
  }

  // fwrite(&p1, sizeof(Person), 1, fp);
  // fwrite(&p2, sizeof(Person), 1, fp);
  
  while (fread(&p3, sizeof(Person), 1, fp)) {
    // fread(&p3, sizeof(Person), 1, fp);
    printf("%d %s %s\n", p3.id, p3.fname, p3.fname);
  }


  fclose(fp);
}