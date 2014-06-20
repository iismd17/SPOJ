#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int test;
	long double n,sum;
	long long int res,i,j;
	scanf("%d",&test);
	for (i = 0; i < test; i++)
	{
		scanf("%Lf",&n);
		if (n == 0)
		{
			printf("1\n");
			continue;
		}
		sum = ((0.5)*log10(2*3.14159265358979323*n)) + (n*log10(n/2.71828182845904523536));
		res = (long long int)sum;
		printf("%lld\n",res+1);
	}
	return 0;
}