/*
Purpose:Write a program to count set bits.
Date:28/06/2021
Author:Shubham Bhandari
Version:3.0
*/

#include <stdio.h>
#include <string.h>


int countSetBits(unsigned int n)
{
  unsigned int c; // the total bits set in n
  for (c = 0; n; n >>= 1)
  {
    c += n & 1;
  }
  return c;
}
 
int main(void)
{
  unsigned int n;
  printf("Enter a positive integer: ");
  scanf("%u", &n);
  printf("Number of set bits in %d:%d\n",n,countSetBits(n));
}
