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
  struct Book myBook;

  myBook.id = 1;
  strcpy(myBook.title, "C-language");
  strcpy(myBook.author, "Pusadee");
  myBook.price = 999.99;

  printf("Book Id %d\n", myBook.id);
  printf("Book Title %s\n", myBook.title);
  printf("Book Author %s\n", myBook.author);
  printf("Book Price %.2f\n", myBook.price);

}