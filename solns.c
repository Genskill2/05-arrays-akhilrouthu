/* Enter your solutions in this file */
#include <stdio.h>

int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);


int max(int arr[], int size)
{
   int a = arr[0];
  for(int i =0; i<size; i++)
  {
     
    
      if(a < arr[i])
        a = arr[i];
      
  }
  return a;
}

int min(int arr[], int size)
{  
     int a = arr[0];
      for(int i =0; i<size; i++)
  {
     
    
      if(a > arr[i])
        a = arr[i];
      
  }
  return a;
}


 float average(int arr[], int size)
 {
     float avg = 0;
     float total = 0;
     for(int i =0; i<size; i++)
     {
       total+= arr[i]
     }
     avg = total/size;
   return avg;
 }

 int mode(int arr[], int size)
 {
   int counts [];
   
   for(int i =0;arr[i]<=max(arr , size); i++)
       {
         counts[i] = i;
         
       }
   for(int i =0; i<size; i++)
   {
     if(counts
   }
 }

 int factors(int size, int arr[])
 {
   
   
 }

