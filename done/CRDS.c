#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int a,b,c,test,i;
	long long int n,res;
	scanf("%d",&test);
	for (i = 0; i < test; i++)
	{
		scanf("%lld",&n);
		res = 3*n*(n-1);
		res = res/2;
		res = res + (2*n);
		printf("%lld\n",res%1000007);
	}
	return 0;

}