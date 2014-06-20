#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int t3,tl3,sum,a,c,d,b,n,p,r,s,t;
	int z,i,j,k,l;
	scanf("%d",&z);
	for (i = 0; i < z; i++)
	{
		/* code */
		scanf("%lli",&t3);
		scanf("%lli",&tl3);
		scanf("%lli",&sum);
		n = sum*2;
		n = n/(t3 + tl3);
		d = (tl3-t3)/(n-5);
		a = t3 - (2*d);
		printf("%lli\n",n);
		for (j = 0; j < n-1; j++)
		{
			/* code */
			printf("%lli ",a+(j*d));
		}
		printf("%lli\n",a+((n-1)*d));
	}
	return 0;
}
