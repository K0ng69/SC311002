#include <stdio.h>

int main() {
  char name[40] = "Kongphop Chansila";
  int distance = 10;
  int velocity = 3;
  float time = (float)distance/velocity;

  printf("My name is %s\n", name);
  printf("Distance between house and school : %d KMs\n", distance);
  printf("I walk by velocity (KM / Hour)    : %d \n", velocity);
  printf("I walk from home to school take   : %.2f Hours\n", time);

  return 0;
}