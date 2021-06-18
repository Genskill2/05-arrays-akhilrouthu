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
    int a=0,b=0;
  for(int i=0;i<n;++i){
    int c=0;
    for(int j=0;j<n;++j){
      if(z[j]==z[i])
        c++;
    }
    if(c>a){
      a =c;
      b = z[i];
    }
  }
  return(b);
 }

   
 int factors(int size, int arr[])
 {
    int x=2,i=0;
  while(n!=1){
    if (n%x==0){
      while(n%x==0){
        z[i]=x;
        i++;
        n=(n/x);
      }
    }
    x++;
    }
  return (i);
   
 }

