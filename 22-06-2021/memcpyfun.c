/*
Purpose:Write a C program implementing  mem copy operation with void pointers.
Date:22/06/2021
Author:Shubham Bhandari
Version:2.0
*/

#include <stdio.h>
#include <string.h>

void memcpyfun(void *des,void *src,int n)
{
   int i;
   char *s=(char*)src;
   char *d=(char*)des;
   for(i=0;i<n;i++)
   {
     d[i]=s[i];
   }
}

int main()
{
   char des[10];
   char src[10]="shubham";
   memcpyfun(des,src,strlen(src)+1);
   printf("After copy string:%s\n",des);
}
