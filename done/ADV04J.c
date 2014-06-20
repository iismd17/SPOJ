#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t,i,N,j,flag;
	scanf("%d",&t);
	i=0;
	while(i<t)
	{
		scanf("%d",&N);
		j = 0;
		flag = 1;
		while(N!=0)
		{
			if (N!=1 && N%2!=0)
			{
				flag = 0;
			}
			N = N/2;
			j++;
		}
		if (flag == 1)
		{
			printf("%d\n",j);
		}
		else
		{
			printf("%d\n",j+1);
		}
		i++;
	}
	return 0;
}