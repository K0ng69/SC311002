#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  char cont;
  int m1, m2, c1, c2;
  do
  {
    printf("Guess the flipping coin (1 for heads, 0 for tails):\n");
    printf("Enter the first answer : ");
    scanf("%d", &m1);
    printf("Enter the second answer : ");
    scanf("%d", &m2);
    
    srand(1234);
    c1 = rand() % 2;
    c2 = rand() % 2;
    if ((m1 == c1) && (m2 == c2) || (m1 == c2) && (m2 == c1))
    {
      printf("Your answer is %d-%d, Com answer = %d-%d. Your answer correct\n", m1, m2, c1, c2);

    }
    else
    {
      printf("Your answer is %d-%d, Com answer = %d-%d. Your answer wrong!\n", m1, m2, c1, c2);
    }
    printf("Do you want to continue? (y/n)");
    scanf("%*c%c", &cont);
  } while (cont == 'y');
  
  

}