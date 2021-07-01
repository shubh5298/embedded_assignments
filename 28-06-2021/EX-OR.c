/*
Purpose:Write a program to count set bits.
Date:28/06/2021
Author:Shubham Bhandari
Version:3.0
*/

#include <stdio.h>
#define EX_OR(number) (number&1? number|1 : !number)
int main()
{
  int number,ans;
  printf("enter the number: ");
  scanf("%d",&number);
  printf("exclusive or number:%d\n",EX_OR(number));
  ans=number^1;
  printf("exor:%d\n",ans);
}
