#include <stdio.h>

int main() {
  char name[40] = "Kongphop Chansila";
  int distance = 10;
  int velocity = 3;
  float time = ((float)distance/velocity);
  // 3600 is sec in 1 hour
  int all_sec = time*3600;
  int hour, min, sec;
  hour = all_sec/3600;
  min = (all_sec-(hour*3600))/60;
  sec = all_sec-((hour*3600)+(min*60));
  printf("My name is %s\n", name);
  printf("Distance between house and school : %d KMs\n", distance);
  printf("I walk by velocity (KM / Hour)    : %d \n", velocity);
  printf("Time  from home to school         : %d Hours, %d mins, %d secs", hour, min, sec);

  return 0;
}