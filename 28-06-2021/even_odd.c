/*
Purpose: Write a program with Macro to find even or odd using bitwise operator.
Date:28/06/2021
Auhtor:Shubham Bhandari
Version:3.0
*/

#include <stdio.h>
#define even_odd(number) ((number^1==number+1)?1:0)
int main()
{
  int number;
  printf("enter the number: ");
  scanf("%d",&number);
  if(even_odd(number)==0)
  {
    printf("number is even\n");
  }
  else
  {
    printf("number is odd\n");
  }
  return 0;
}
