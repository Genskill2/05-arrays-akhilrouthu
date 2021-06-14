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
       total+= arr[i];
     }
     avg = total/size;
   return avg;
 }

 int mode(int arr[], int size)
 {
   int counts [max(arr , size)];
    size_t size2 = 0;
   int count = 0;
        size2 = max(arr,size) + 1;
    int mods [size2];
    int mod =0;
    
    int c =0;

   for(int i =0;i<=max(arr,size); i++)
       {
         counts[i] = i;
         
       }
   for(int i =0; i<size2; i++)
   {
     for(int j =0; j<size; j++)
     {
        if(counts[i] == arr[j])
        {
           count++;
        }
        mods[i] = count;
     }
   } 
     
      mod = max(mods,size2);
   
    for(int i=0; i<size2; i++)
    {
       if(mod == arr[i])
          c=i;
    }
    return c;
 }


   
   
   
   
   
   
   
 int factors(int size, int arr[])
 {
   
   
 }

