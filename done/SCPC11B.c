#include <stdio.h>
#include <stdlib.h>


int bubble_sort(int *a,int st)
{
	int tmp,i,j;
	for (i = 0; i < st-1; i++)
	{
		for (j = i+1; j < st; j++)
		{
			if (a[j] < a[i])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	return 0;
}

int main()
{
	int st,i,j,tmp;
	while(1)
	{
		scanf("%d",&st);
		if (st==0)
		{
			return 0;
		}
		int *a;
		a = (int*)malloc(st*sizeof(int));
		for (i = 0; i < st; i++)
		{
			scanf("%d",&a[i]);
		}
		bubble_sort(a,st);
		/*for (i = 0; i < st-1; i++)
		{
			for (j = i+1; j < st; j++)
			{
				if (a[j] < a[i])
				{
					tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}	*/
/*		for (i = 0; i < st; i++)
		{
			printf("BS : %d\n",a[i]);
		}*/
		int flag = 0;
		for (i = 0; i < st-1; i++)
		{
			if (a[i+1]-a[i] > 200)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			printf("IMPOSSIBLE\n");
		}
		else if (flag==0)
		{
			if(((1422-a[st-1])*2) <= 200)
			{
				printf("POSSIBLE\n");
			}
			else
			{
				printf("IMPOSSIBLE\n");
			}
		}
	}
}