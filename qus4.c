
//Fibonacci Series nth no.
#include<stdio.h>
 
int fib(int n)
{
  
  int f[n+2];   
  int i;
 
  
  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }
 
  return f[n];
}
 
int main ()
{
  int n ;
  scanf("%d", &n);
  printf("%d", fib(n));
 
  return 0;
}
