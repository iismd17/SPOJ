#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,test;
	scanf("%d",&test);
	i=0;
	while(i<test)
	{
		int arr[2001] = {0};
		int max = 0;
		int n,k;
		scanf("%d",&n);
		k=0;
		int v,val;
		while(k<n)
		{
			scanf("%d",&v);
			arr[1000+v] = arr[1000+v] + 1;
			if (arr[1000+v] > max)
			{
				max = arr[1000+v];
				val = v;
			}
			k++;
		}
		if (max>(n/2))
		{
			printf("YES %d\n",val);
		}
		else
		{
			printf("NO\n");
		}
		i++;
	}
	return 0;
}