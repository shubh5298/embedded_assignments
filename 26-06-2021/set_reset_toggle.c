/*
Purpose:Write a program to CLEAR, SET, TOGGLE with bitwise operator using Macro.
Date:26/06/2021
Author:Shubham Bhandari
Version:2.0
*/

#include <stdio.h>
#define setbit(val,position) (val=val|(1<<position))
#define clearbit(val,position) (val=val&~(1<<position))
#define togglebit(val,position) (val=val^(1<<position))
int main()
{
  int val,position;
  printf("enter the hexadecimal number: ");
  scanf("%x",&val);
  printf("enter the position: ");
  scanf("%d",&position);
  printf("set bit:%x\n",setbit(val,position));
  printf("clear bit:%x\n",clearbit(val,position));
  printf("toggle bit:%x\n",togglebit(val,position));
  return 0;
}
