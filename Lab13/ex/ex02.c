#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
  int id;
  char title[20];
  char author[20];
  float price;
};

int main() {
  int N = 3;
  int i;
  struct Book myBooks[N];

  for (i = 0; i < N; i++) {
    printf("-------------------------------------------------------------\n");
    myBooks[i].id = i+1;
    printf("Enter title : ");
    scanf("%s", myBooks[i].title);
    printf("Enter author : ");
    scanf("%s", myBooks[i].author);
    printf("Enter price : ");
    scanf("%f", &myBooks[i].price);
  }

  for (i = 0; i < N; i++) {
    printf("%05d\t%s\t%s\t%.2f\n", myBooks[i].id, myBooks[i].title, myBooks[i].author, myBooks[i].price);
  }
}