#include <stdio.h>
#include <string.h>

int main()
{
	char x[40];
	char y[40];
	int test,j,k,l,m,i,strx,stry,maxlen,a,b1,b2;
	scanf("%d",&test);
	i=0;
	while(i<test)
	{
		scanf("%s",x);
		scanf("%s",y);
		scanf("%d",&b1);
		scanf("%d",&b2);
		strx = strlen(x);
		stry = strlen(y);
		maxlen = 0;
		if (strlen(x)>strlen(y))
		{
			k = stry;
			l = strx-stry;
			for (j = strx-1; j>=l; j--)
			{
				y[j] = y[j-l];
			}
			for (m=0; m<=j; m++)
			{
				y[m] = '0';
				/*printf("checklock %c \n",y[m]);*/
			}
			y[strx] = '\0';
			maxlen = strx;
		}

		if (strlen(y)>strlen(x))
		{
			k = strx;
			l = stry-strx;
			for (j = stry-1; j>=l; j--)
			{
				x[j] = x[j-l];
			}
			for (m=0; m<=j; m++)
			{
				x[m] = '0';
				/*printf("checklock %c \n",x[m]);*/
			}
			x[stry] = '\0';
			maxlen = stry;
		}
		if (maxlen == 0)
		{
			maxlen = strx;
		}
		int flag = 0;
		int a;
		for (j = 0; j<maxlen; j++)
		{
			a = (x[j]- '0') + (y[j] - '0');
			/*printf("a_val : %d\n",a);*/
			if (a>=b1 || a>=b2)
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
/*		printf("%s\n",x);
		printf("%s\n",y);*/
		i++;
	}
	return 0;
}