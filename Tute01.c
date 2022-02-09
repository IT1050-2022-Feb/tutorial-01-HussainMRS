/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  //declaring varaibles
  int mark1 , mark2 ;
  float tot , avg ;
  
  //getting the user inputs
  printf( " Enter the subject 1 mark : " ) ;
  scanf( "%d" , &mark1 ) ;

  printf( " Enter the subject 2 mark : " ) ;
  scanf( "%d" , &mark2 ) ;

  //calculating and assigning variables values 
  tot = mark1 + mark2 ;

  avg = tot / 2 ;

  //final result
  printf("The average is %.2f : " , avg ) ;

  return 0;
}

