#include <stdio.h>

struct Book {
  int id;
  char title[20];
  char author[20];
  float price;
};

void getBook(struct Book bs[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("-------------------------------------------------------------\n");
    bs[i].id = i+1;
    printf("Enter title : ");
    scanf("%s", bs[i].title);
    printf("Enter author : ");
    scanf("%s", bs[i].author);
    printf("Enter price : ");
    scanf("%f", &bs[i].price);
  }
}

void printBK(struct Book b) {
  printf("Book\t%05d\t%s\t%s\t%.2f\n", b.id, b.title, b.author, b.price);
}

void printBook(struct Book bs[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%05d\t%s\t%s\t%.2f\n", bs[i].id, bs[i].title, bs[i].author, bs[i].price);
    printBK(bs[i]);
  }
}

int main() {
  int N = 3;
  struct Book myBooks[N];

  getBook(myBooks, N);
  printBook(myBooks, N);

  printBK(myBooks[0]);
}