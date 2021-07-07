/*
Purpose:Implemention of c program for string length, string copy and string comparison.(without using inbuilt function)
Date:24/06/2021
Author:Shubham Bhandari
Version:3.0
*/
#include <stdio.h>
#include<string.h>

int strlenfun(const char* src)
{
   //char* src=(char*)s;
   int cnt=0;
   while(*src!='\0')
   {
      *src++;
      cnt++;
   }
   return cnt;
}

void strcpyfun(char* dest,char* src,int n)
{
  int i;
  char* d=(char*)dest;
   for(i=0;*src!='\0';i++)
   {
     d[i]=*src++;
   }
   return d;
}

void strcmpfun(char* dest,char* src,int n)
{
  int i,cnt=0;
  char* s=(char*)src;
  char* d=(char*)dest;
  for(i=0;i<n;i++)
  {
     if(s[i]==d[i])
     cnt++;
  }
  if(cnt==n)
  {
    printf("String is same\n");
  }
  else
  {
    printf("string is not same\n");
  }
  return 0;
}

int main()
{
   char dest[10];
   const char src[10]="shubham";
   printf("size of string:%d\n",strlenfun(src));
   strcpyfun(dest,src,strlenfun(src)+1);
   printf("copy string is:%s\n",dest);
   strcmpfun(dest,src,strlen(src)+1);
}

