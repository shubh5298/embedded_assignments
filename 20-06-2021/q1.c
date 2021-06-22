/*
Purpose:Find the second largest number in the array
Date:20/06/2021
Author:Shubham Bhandari
Version:1.0
*/

#include <stdio.h>
int main()
{
  int array[5]={1,2,3,4,5};
  int large,second,loop;
 if(array[0] > array[1]) {
      large = array[0];
      second  = array[1];
   } else {
      large = array[1];
      second  = array[0];
   }

   for(loop = 2; loop < 5; loop++) {
      if( large < array[loop] ) {
         second = large;
         large = array[loop];
      } else if( second < array[loop] ) {
         second =  array[loop];
      }
   }
   
   printf("large number:%d\n",large);
   printf("second large:%d\n",second);
}

































