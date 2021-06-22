/*
Purpose:print 1 to n using recursion
Date:16/06/2021
Author:Shubham Bhandari
Version:1.1
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
    fun(num-1);
    printf("%d\t",num);
  }
}
