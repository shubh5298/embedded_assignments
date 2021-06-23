/*
Purpose: Write a C Program to show matrix multiplication on 2-D Array.
Date:21/06/2021
Author:Shubham Bhandari
Version:3.0
*/

#include <stdio.h>
#define row1 3
#define col1 3
int main()
{
  int i,j,k;
  int mat1[row1][col1],mat2[row1][col1],mat3[row1][col1];
  /*1st matrix*/
  printf("enter the 1st matrix: ");
  for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
    {
      scanf("%d",&mat1[i][j]);
    }
  }
  /*2nd matirx*/
  printf("enter the 2nd matrix: ");
  for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
    {
      scanf("%d",&mat2[i][j]);
    }
  }
  /*Multiplication*/
  for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
    {
      mat3[i][j]=0;
      for(k=0;k<col1;k++)
      {
        mat3[i][j]+=mat1[i][k]*mat2[k][j];
      }
    }
  }
  /*Printing final matrix*/
  for(i=0;i<row1;i++)
  {
    for(j=0;j<col1;j++)
    {
      printf("%d\t",mat3[i][j]);
    }
  }
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  

