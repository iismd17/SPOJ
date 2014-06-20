#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a,k,i,p,test,count,x;
	scanf("%d",&test);
	for (i = 0; i < test; i++)
	{
		scanf("%d",&a);
		count = 0;
		p = 5;
		while(1)
		{
			x=a/p;
			count = count + x;
			p=5*p;
			if (a/p==0)
			{
				break;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
