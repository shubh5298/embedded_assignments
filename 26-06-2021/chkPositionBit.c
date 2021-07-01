/*
Purpose:Write a program as a Macro will take two arguments. It should return the position 1 or 0
Date:26/06/2021
Author:Shubham Bhandari
Version:2.0
*/

#include <stdio.h>
#define checkPositionBit(val,position) (val=(val&(1<<position)))
int main()
{
  int val,position;
  printf("enter the number: ");
  scanf("%d",&val);
  printf("enter the position: ");
  scanf("%d",&position);
  if(checkPositionBit(val,position))
  {
    printf("Bit is set\n");
  }
  else
  {
    printf("Bit is reset\n");
  }
}



