/*
Puporse:Write a program to Swap the nibble in a byte without using bitwise operator.
Date:26/06/2021
Author:Shubham Bhandari
Version:2.0
*/

#include<stdio.h>    
#include<stdlib.h>  
int main()
{
  int a[10],i,num,n;
  printf("enter the number: ");
  scanf("%d",&num);
  for(i=0;num>0;i++)
  {
     a[i]=num%2;
     num=num/2;
  }
  /*Printing swapped binary number*/
  printf("swapped binary number: ");
  for(n=0;n<i;n++)
  {
    printf("%d",a[n]);
  }
  return 0;
}  

    
