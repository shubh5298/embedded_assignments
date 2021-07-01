/*
Purpose:Write a program to count set bits.
Date:28/06/2021
Author:Shubham Bhandari
Version:3.0
*/

#include<stdio.h>
 
/* Function to check if x is power of 2*/
int isPowerOfTwo(int n)
{
  if (n == 0)
    return 0;
  while (n != 1)
  {
      if (n%2 != 0)
         return 0;
      n = n/2;
  }
  return 1;
}
 
/*main program to test above function*/
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    isPowerOfTwo(num)? printf("Yes\n"): printf("No\n");
    return 0;
}
