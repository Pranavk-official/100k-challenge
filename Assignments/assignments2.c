// 1. Write a program to check whether a student has passed or failed in a
// subject after he or she enters their mark (pass mark for a subject is 50 out
// of 100). a. Program should accept an input from the user and output a message
// as “Passed” or “Failed” Variable     Data type mark         float

#include <stdio.h>

int main(void) {
  printf("Question 1 : Pass or Fail\n\n");

  float mark;
  printf("Enter mark : ");
  scanf("%f", &mark);

  if (mark < 50) {
    printf("Failed!!!!");
  } else {
    printf("Passed!!!!");
  }

  // 2. Write a program to show the grade obtained by a student after he/she
  // enters their total mark percentage. a. Program should accept an input from
  // the user and display their grade as follows Mark     Grade < 90       A
  // 80-89      B
  // 70-79      C
  // 60-69      D
  // 50-59      E
  // < 50      Failed

  printf("\n\nQuestion 2\n");

  float mp;
  printf("Enter mark percentage : ");
  scanf("%f", &mp);

  if (mp < 50) {
    printf("Grade: Failed");
  } else if (mp < 60) {
    printf("Grade: E");
  } else if (mp < 70) {
    printf("Grade: D");
  } else if (mp < 80) {
    printf("Grade: C");
  } else if (mp < 90) {
    printf("Grade: B");
  } else {
    printf("Grade: A");
  }

  return 0;
}
