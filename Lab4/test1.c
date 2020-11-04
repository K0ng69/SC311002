#include <stdio.h>
#include <stdlib.h>

int main() {
  int capital, interest;
  float int_perYear;
  printf("Enter your capital : ");
  scanf("%d", &capital);
  printf("Enter yearly interest rate : ");
  scanf("%d", &interest);
  int_perYear = capital*interest/100;
  printf("Your interest per year is %.2f Baht", int_perYear);
}