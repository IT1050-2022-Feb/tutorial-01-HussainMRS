/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
   int mark1 , mark2 ;
   float avg , tot ;
   
   printf("ENter the mark for subject1 : ") ;
   scanf("d" , &mark1 ) ;
   
   printf("ENter the mark for subject2 : ") ;
   scanf("d" , &mark2 ) ;
   
   tot = mark1 + mark2 ;
   
   avg = tot / 2 ;
   
   printf(" average of the std is %.1f " , avg ) ;
   
  return 0;
}

