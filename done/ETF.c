#include <stdio.h>
#include <stdlib.h>

long long unsigned fi(int n) 
{ 
  long long unsigned result = (long long unsigned)n; 
  int i;
  for(i=2;i*i <= n;i++) 
  { 
    if (n % i == 0) result -= result / i; 
    while (n % i == 0) n /= i; 
  } 
  if (n > 1)
  {
    result -= result / n; 
  }
  return result; 
}

int main()
{
  int T,n,i;
  scanf("%d",&T);
  for (i = 0; i < T; i++)
  {
    scanf("%d",&n);
    printf("%llu\n",fi(n));
  }
  return 0;
}