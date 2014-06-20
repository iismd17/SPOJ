#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prcheck(long long unsigned N)
{
	int a,b,c,d;
	b=sqrt(N);
	if (N==2 || N==3)
	{
		return -1;
	}
	for (a = 2; a <= b; a++)
	{
		if (N%a == 0)
		{
			return a;
		}
	}
	return -1;
}

int main()

{
	int t,i,flag,l;
	long long unsigned q,j;
	scanf("%d",&t);
	int k,x;
	for(i=0;i<t;i++)
	{
		flag = 0;
		k=0;
		//q = 987654321012;
		scanf("%llu",&q);
		if (q==0 || q==1)
		{
			printf("Yes\n");
			continue;
		}
		//for (j = 2; q != 1;)
		j=2;
		while(q != 1)
		{
			x=0;
			if (prcheck(q) == -1)
			{
				if ((q%4 == 3))
				{
					flag = 1;
					break;
				}
				else
				{
					break;
				}
			}
			else
			{
				j = prcheck(q);
			}
			while (q%j == 0)
			{
				q=q/j;
				x++;
			}
			if ( (j%4 == 3) && (x%2!=0) )
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			printf("No\n");
		}
		else
		{
			printf("Yes\n");
		}
	}
	return 0;
}
