/*
Purpose:write a program to swap the string by using swapping pointer and also write a program for swaping the data.
Date:24/06/2021
Author:Shubham Bhandari
Version:3.0
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swapfun(char** des,char** src)
{
   char* temp=*src;
   *src=*des;
   *des=temp;
}

int main()
{
   char* src="abc";
   char* des="def";
   printf("before swapping\n");
   printf("%s %s\n",src,des);
   swapfun(&des,&src);
   printf("after swapping\n");
   printf("%s %s\n",src,des);
   
}
