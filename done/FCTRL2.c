#include<stdio.h>
#include<stdlib.h>

void factorial(int n)
{
int a[200];
int m=0;
int tmp = 0;
int i,j,x,k;
if ((n == 0) || (n == 1))
{
	printf("%d\n",1);
}
else
{
	a[0] = 1;
	m=1;
	for (i = 2; i<=n; i++)
	{
		for (j = 0; j < m ; j++)
		{
			x = (a[j] * i + tmp);
			a[j] = x%10;
			tmp = x/10;
		}
		while(tmp!=0)
		{
			m = m + 1;
			a[m-1] = tmp%10;
			tmp = tmp/10;
		}
	}
	for (k = m-1; k>=0; k--)
	{
		printf("%d",a[k]);
	}
	printf("\n");
}
}

int main()
{
	int a,i,j,k,p,q,b,c,l,r,m,n;
	scanf("%d",&p);
	int t[p];
	for (i=0;i<p;i++)
	{
		scanf("%d",&t[i]);
	}
	for (i=0;i<p;i++)
	{
		factorial(t[i]);
	}
	return 0;
}
