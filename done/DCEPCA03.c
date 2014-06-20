#include <stdio.h>
#include <stdlib.h>
long long unsigned totient(int n)
{
 	int i;
 	long long unsigned k;
 	k=0;
 	for (i = 1; i <= n; i++)
 	{
		if (euler_gcd(n,i) == 1)
		{
			k++;
		}
 	}
 	//printf("%d\n",k);
 	return k;
}

int euler_gcd(int a, int b)
{
	int r1,r2,tmp;
	r1 = a;
	r2 = b;
	while(r2 != 0)
	{
		tmp = r1;
		r1 = r2;
		r2 = tmp%r2;
	}
	return r1;
}
int gcd(int a, int b)
{
	int i,j;
	for (i = a; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			break;
		}
	}
	//printf("%d\n",i);
	return i;
}

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
	int n,i,j,T,k,tmp;
	long long unsigned H,G;
	long long unsigned *tot;
	tot = (long long unsigned  *)malloc(10000*sizeof(long long unsigned ));
	for( i=0;i<10000;i++)
	{
		tot[i] = fi(i+1);
	}
	scanf("%d",&T);
	for ( k = 0; k < T; k++)
	{
		scanf("%d",&n);
		H=0;
		for (i = 0; i < n; i++)
		{
			H = H + tot[i];
		}
		H = H*H;
		/*for (i = 0; i < n; i++)
		{
			G = tot[i];
			for( j=0;j<n;j++)
	        {
	           H  = H + (G*tot[j]);
	        }
		}*/
		/*if (H<0)
		{
			printf("i = %d\t tot[i] = %d\n j = %d\t tot[j] = %d\n",i,tot[i-1],j,tot[j-1]);
		}*/
		printf("%llu\n",H);
	}
	return 0;
}

/*H=0;

For( i=1;i<=n;i++){

                For( j=1;j<=n;j++){

                    H=H+totient(i)*totient(j);

          }

}
*/
