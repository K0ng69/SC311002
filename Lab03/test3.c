#include <stdio.h>

int main() {
  // char name[20] = "Kongphop Chansila";
  char name[20];
  // int distance;
  float distance, avg_vel, time;
  int all_sec, hour, min, sec;

  // distance = 10;
  // avg_vel = 3.5;

  printf("Input your name     : ");
  scanf("%s", name);
  printf("Input Distance (KM)    : ");
  scanf("%f", &distance);
  printf("Input avg velocity (KM/H)  : ");
  scanf("%f", &avg_vel);

  time = (float)distance/avg_vel;
  all_sec = time*3600;
  hour = all_sec/3600;
  min = (all_sec-(hour*3600))/60;
  sec = all_sec-((hour*3600)+(min*60));

  printf("My name is %s\n", name) ;
  printf("Distance between house and school : %.2f KMs\n", (float)distance);
  printf("I walk by velocity (KM / Hour)    : %.2f\n", avg_vel);
  printf("Time from home to school          : %d Hours, %d mins, %d secs", hour, min, sec);
  return 0;
}