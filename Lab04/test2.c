#include <stdio.h>
#include <stdlib.h>

int main() {
  char name[20];
  int no_year;
  float capital, interest, int_perYear, balance;
  printf("Enter your account name : ");
  scanf("%s", name);
  printf("Enter your capital : ");
  scanf("%f", &capital);
  printf("Enter yearly interest rate : ");
  scanf("%f", &interest);
  printf("Enter the number of days : ");
  scanf("%d", &no_year);

  int_perYear = capital*interest/100;
  balance =  capital+int_perYear*(no_year/365.0);
  printf("Account name : %s\n", name);
  printf("Balance amount : %.2f\n", balance);
  printf("Your interest per year is %.2f Baht", balance-capital);
}