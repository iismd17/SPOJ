#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int even(int a)
{
	if (a%2 == 0)
	{
		return 1;
	}
	else
		{return 0;}
}

int odd(int a)
{
	if (a%2 == 1)
	{
		return 1;
	}
	else
		{return 0;}
}



int main()
{
	int j=1;
	while(1)
	{
		char *arr;
		arr = (char *)malloc(32000*sizeof(char));
		scanf("%s",arr);
		if (!strcmp(arr,"()"))
		{
			return 0;
		}
		// calculate lmax.
		int i=0;
		int l=0;
		int lmax=0;
		//printf("length : %d\n",strlen(arr));
		while(i<strlen(arr))
		{
			if (arr[i]=='(')
			{
				l++;
			}
			else if (arr[i]==')')
			{
				l--;
			}
			if (l>lmax)
			{
				lmax = l;
			}
			i++;
		}
		//printf("lmax : %d\n",lmax);

		//routines for l.
		i=0;
		l=0;
		int k=0;
		int cT[lmax+1];
		int cF[lmax+1];
		while(k<=lmax)
		{
			cT[k]=0;
			cF[k]=0;
			k++;
		}
		//printf("zero assignment\n");
		while(i<strlen(arr))
		{
			if (arr[i]=='(')
			{
				l++;
				//printf("(\n");
				//printf("%c\n",arr[i]);
			}
			else if (arr[i]=='T')
			{
				cT[l] = cT[l] + 1;
				//printf("T\n");
				//printf("%c\n",arr[i]);
			}
			else if (arr[i]=='F')
			{
				cF[l] = cF[l] + 1;
				//printf("F\n");
				//printf("%c\n",arr[i]);
			}
			else if (arr[i]==')')
			{
				//printf(")\n");
				//printf("%c\n",arr[i]);			
				//l == AND
				if ( (even(lmax) && even(l)) || (odd(lmax) && odd(l)) )   
				{
					if (cF[l]>0)
					{
						cF[l-1] = cF[l-1] + 1;
					}
					else if (cF[l]==0 && cT[l]>0)
					{
						cT[l-1] = cT[l-1] + 1;
					}
					cF[l]=0;
					cT[l]=0;
					l--;
				}
				else if ( (even(lmax) && odd(l)) || (odd(lmax) && even(l)) )
				{
					if (cT[l]>0)
					{
						cT[l-1] = cT[l-1] + 1;
					}
					else if (cT[l]==0 && cF[l]>0)
					{
						cF[l-1] = cF[l-1] + 1;
					}
					cF[l]=0;
					cT[l]=0;
					l--;
				}
			}
			i++;
		}
		if (cF[0]==1)
		{
			printf("%d. false\n",j);
		}
		else if (cT[0]==1)
		{
			printf("%d. true\n",j);
		}
		j++;
	}
}