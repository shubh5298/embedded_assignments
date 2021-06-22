/*
Pupose:print n to 1 using recurrsion
Date:16/06/2021
Author:Shubham Bhandari
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
 return;
 else
 printf("%d\t",num);
 fun(num-1);
 
}
