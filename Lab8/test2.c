#include <stdio.h>

int main()
{
  int max = 0, min, sum = 0, n, number;
  float avg;

  do
  {
    printf("Enter the number of entries: ");
    scanf("%d", &n);
    if (n > 0)
    {
      for (int i = 0; i < n; i++)
      {
        printf("Enter a number for entry %d: ", i + 1);
        scanf("%d", &number);
        sum += number;
        if (number < min)
        {
          min = number;
        }

        if (number > max)
        {
          max = number;
        }
      }
      avg = (float)sum / n;

      printf("Min = %d\n", min);
      printf("Max = %d\n", max);
      printf("Sum = %d\n", sum);
      printf("Average = %.2f\n", avg);
    }
    else
    {
      printf("Please enter a positive integer !\n");
    }
  } while (n < 0);
}