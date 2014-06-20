#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N,sum,min_diff,i;
	scanf("%d",&N);
	int *a;
	a = (int *)malloc(N*sizeof(int));
	i=0;
	while(i<N)
	{
		scanf("%d",&a[i]);
		i++;
	}
	min_diff = a[1]-a[0];
	for (i = 0; i < N-1; i++)
	{
		if (min_diff > (a[i+1]-a[i]))
		{
			min_diff = a[i+1] - a[i];
		}
	}
	i = 0;
	while(i<N-1)
	{
		if ((a[i+1] - a[i]) % min_diff == 0)
		{
			i++;
		}
		else
		{
			min_diff = (a[i+1] - a[i]) % min_diff ;
			i=0;
		}
	}
	sum = 0;
	i = 0;
	while(i<N-1)
	{
		sum = sum + ((a[i+1] - a[i]) / min_diff) - 1;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}
