#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char grade(int score) {
  char g;
  if (score >= 80)
  {
    g = 'A';
  }
  else if (score >= 70)
  {
    g = 'B';
  }
  else if (score >= 60)
  {
    g = 'C';
  }
  else if (score >= 50)
  {
    g = 'D';
  }
  else
  {
    g = 'F';
  } 
  return g;
}

int main() {
  char filename[50];
  printf("Enter a file name to read : ");
  scanf("%s", filename);
  FILE *fp = fopen(filename, "r");

  if (fp == NULL) {
    printf("\nError :  %s does not exist", filename);
    exit(-1);
  }

  int id = 0;
  char fname[20];
  char lname[20];
  // char fullname[40];
  int score = 0;

  printf("------------------------------------------------\n");
  printf(" Student ID\tName\t\tScore\tGrade\n");
  printf("------------------------------------------------\n");
  while (fscanf(fp, "%d %s %s %d", &id, fname, lname, &score) != EOF) {
    strcat(strcat(fname, " "), lname);
    printf("%11d \t%15s %5d\t  %c\n", id, fname, score, grade(score));
  }

  fclose(fp);
}