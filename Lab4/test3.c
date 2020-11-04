#include <stdio.h>
#include <stdlib.h>

int main() {
  char fname[10], lname[10];
  float m_credit, m_grade, e_credit, e_grade, gpa;

  printf("Enter first name : ");
  scanf("%s", fname);
  printf("Enter last name : ");
  scanf("%s", lname);

  printf("Mathematic : #credit #grade(0-4) : ");
  scanf("%f %f", &m_credit, &m_grade);
  printf("English : #credit #grade(0-4) : ");
  scanf("%f %f", &e_credit, &e_grade);
  gpa = ((m_credit*m_grade)+(e_credit*e_grade))/(m_credit+e_credit);
  printf("GPA of %s %s is %.2f", fname, lname, gpa);
}