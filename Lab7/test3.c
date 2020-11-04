#include <stdio.h>

int main()
{
  int p1, p2, s1, s2;
  float avg;
  char g;
  printf("Enter scores of Mathematic sub-testing (two times)!\n");
  printf("Enter a percentage of the first testing:");
  scanf("%d", &p1);
  printf("Enter a percentage of the second testing:");
  scanf("%d", &p2);
  if (p1 + p2 == 100)
  {
    printf("Score 1:");
    scanf("%d", &s1);
    printf("Score 2:");
    scanf("%d", &s2);
    avg =  ((float)p1 * s1 / 100) + ((float)p2 * s2 / 100);
    if (avg >= 80)
    {
      g = 'A';
    }
    else if (avg >= 70)
    {
      g = 'B';
    }
    else if (avg >= 50)
    {
      g = 'C';
    }
    else if (avg >= 30)
    {
      g = 'D';
    }
    else
    {
      g = 'F';
    }
    printf("Your average score is %g, your grade is %c", avg, g);
  }
  else
  {
    printf("Error: Invalid percentages");
  }
}