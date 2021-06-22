/*
Purpose:check if array is sorted in ascending order or not
Date:20/06/2021
Author:Shubham Bhandari
Version:1.2
*/

#include <stdio.h>
int main()
{
  int array[5]={};
  int cnt=0,i;
  printf("elemtes of array: ");
  for(i=0;i<5;i++)
  {
    scanf("%d",&array[i]);
  }
  for(i=1;i<5;i++)
  {
   if(array[i] < array[i+1])
   {
     cnt++;
   }
  }
  if(cnt==0)
  {
    printf("array is sorted");
  }
  else
  {
    printf("array is not sorted");
  }
  
}

//getting error: it is only printing array is not sorted
