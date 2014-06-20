#include <stdio.h>
#include <string.h>
#include <stdlib.h>


float averg (int *candy,int N)
{
	int i = 0;
	float sum = 0;
	float avg;
	while(i<N)
	{
		sum = sum + (float)candy[i];
		i++;
	}
	avg = sum/N;
	return avg;
}

int main()
{
	int N,i,j,ans,avg1,avg2,avg3;
	float avg;
	N=0;
	while (1)
	{
		ans = 0;
		scanf("%d",&N);
		if (N==-1)
		{
			return 0;
		}
		int *candy;
		candy = (int *)malloc(N*sizeof(int));
		i = 0;
		while(i<N)
		{
			scanf("%d",&candy[i]);
			i++;
		}
		avg = averg(candy,N);
		//printf("average : %f\n",avg);
		avg1 = (int)avg;
		/*avg2 = (int)(10000000*avg);
		avg3 = 10000000*avg1;*/

		if ((avg - avg1) != 0)
		{
			 printf("-1\n");
		}
		else
		{
			i = 0;
			while(i<N)
			{
				if (candy[i] < avg1)
				{
					ans = ans + (avg1 - candy[i]);
				}
				i++;
			}
			printf("%d\n",ans);
		}
	}
}