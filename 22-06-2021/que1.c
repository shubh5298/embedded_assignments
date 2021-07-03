/*
Purpose:Write a C program of 2D array
Date:22/06/2021
Author:Shubham Bhandari
Version:2.0
*/



#include<stdio.h>
int main()
{
	int arr[3][4] ={{10,11,12,13},
			{20,21,22,23},
			{30,31,32,33}
			};


	int i,j;
	for(i =0;i<3;i++)
	{
		printf("Address of %dth array = %u %u\n",i,arr[i],*(arr+i));
		for(j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
			printf("%d",*(*(arr+i)+j));
		}
		printf("\n");
	}
}
