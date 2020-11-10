#include <stdio.h>
#include <stdlib.h>

int main() {
  
  FILE *fp;
  fp = fopen("data.txt", "w");

  if (fp == NULL) {
    printf("Error: Cannot open file.");
    exit(-1);
  }
  fprintf(fp, "%s\n", "My name is John.");
  fprintf(fp, "I'm 154 %d years old\n", 30);

  // Write or read file

  fclose(fp);
}