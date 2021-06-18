/* Enter your solutions in this file */
#include <stdio.h>

int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);


int max (int z[],int n){
  int max_so_far =z[0];
  for(int i=0;i<n;i++){
    if(z[i]>max_so_far)
      max_so_far =z[i];
  }
  return(max_so_far);
}

int min (int z[],int n){
  int min_so_far =z[0];
  for(int i=0;i<n;i++){
    if(z[i]<min_so_far)
      min_so_far =z[i];
  }
  return(min_so_far);
}

float average (int z[],int n){
  float sum=0;
  for(int i=0;i<n;i++){
    sum+=z[i];
  }
  int x= sum;
  float avg = (float) x/n ;
  return(avg);
}
int factors (int n, int z[]){
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

int mode (int z[] ,int n){
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
