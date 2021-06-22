/*
Purpose:Left rotate an array upto user's choice 
Date:20/06/2021
Author:Shubham Bhandari
Version:2.1
*/

#include <stdio.h>
int main()
{
  int arr[5]={};
  int i,j,temp[]={},left;
  printf("enter the array element: ");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("enter from where left rotation start: ");
  scanf("%d",&left);
  for(i=0,j=left;i<left,j=5;i++,j++)
  {
    temp[i]=arr[i];
    arr[i]=arr[j];
    arr[i]=temp[i];
  }
  printf("left rotate array:%d",arr[i]);
}

//getting segmentation fault
