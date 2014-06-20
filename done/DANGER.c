#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char *inp;
	inp = (char*)malloc(5*sizeof(char));
	long long int ans,N,first,diff,dmax,tmp;
	int a,b,c,d,i,j,k,l,p,m,n,f,t,save;
	char c1,c2,c3,c4;
	char *D1,*D2,*D3,*D4;
	char *test = "00e0";
	D1 = (char*)malloc(sizeof(char));
	D2 = (char*)malloc(sizeof(char));
	D4 = (char*)malloc(sizeof(char));
	while(1)
	{
		scanf("%s",inp);
		//printf("%s\n",inp);
		if (strcmp(inp,test) == 0)
		{
			return 0;
		}
		else
		{
			c1 = inp[0];
			c2 = inp[1];
			c4 = inp[3];
			*D1 = c1;
			*D2 = c2;
			*D4 = c4;
			//printf("%c\t%c\t%c\n",c1,c2,c4);
			a = atoi(D1);
			b = atoi(D2);
			c = atoi(D4);
			N = (long long int)((a*10 + b)*(pow(10,c)));
			//printf("%lld\n",N);
			tmp = 1;
			dmax = 0;
			while(tmp < N)
			{
				dmax = tmp;
				tmp = tmp*2;
			}
			//printf("dmax : %lld\n",dmax);
			diff = 1;
			first = 1;
			save = 1;
			while(diff < dmax)
			{
				if (N%2 == 0)
				{
					if (save == 1)
					{
						diff = 2*diff;
					}
					else if (save == 0)
					{
						diff = 2*diff;
						first = first + diff;
					}
					N = N/2;
				}
				else if (N%2 == 1)
				{
					if (save == 1)
					{
						diff = diff * 2;
						first = first + diff;
						save = 0;
					}
					else if (save == 0)
					{
						diff = diff * 2;
						//save = 1;
					}
					N = (N/2) + 1;
				}
			}
			printf("%lld\n",first);
		}
	}
}