/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

float m1, m2;

  printf("Enter marks: ");
  scanf("%f",&m1);

  printf("Enter marks: ");
  scanf("%f",&m2);

  printf("Average: %.2f",(m1+m2)/2);
  
  return 0;
}

