/*
Purpose:write a program to convert decimal to binary using recurssion
Date:16/06/2021
Author:Shubham Bhnadari
Version:1.0
*/

#include <stdio.h>
void fun(int);
int main()
{
  int num;
  printf("enter the number: ");
  scanf("%d",&num);
  fun(num);
}

void fun(int num)
{
  if(num==0)
  {
    return;
  }
  else
  {
     fun(num/2);
     printf("%d\t",num%2);
  }
}
