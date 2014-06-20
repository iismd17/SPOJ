#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long unsigned sum_dig(long long unsigned a)
{
	long long unsigned sum,tmp,tmp1,tmp2;
	sum = 0;
	int dig = 0;
	int fir_no,fir_dig,last_no,i,j;
	tmp = a;
	while(tmp!=0)
	{
		tmp = tmp/10;
		dig++;
	}
	last_no = a;
	fir_no = 0;
	fir_dig = 0;
	while(dig>0)
	{	
		tmp2 = last_no;
		tmp = a;
		//last_no = 0;
		i = dig-1;
		for (j = 0; j < i; j++)
		{
			tmp2 = tmp2/10;
		}
		tmp1 = tmp2*pow(10,i);
		fir_dig = tmp2;
		//fir_no = fir_no*10 + fir_dig;
		last_no = last_no - tmp1;
		i = dig;
		for (j = 0; j<i; j++)
		{
			tmp = tmp/10;
		}
		sum = sum + ((fir_dig*(last_no+1)) + ((sumno(fir_dig-1))*pow(10,dig-1)) + (tmp*pow(10,dig-1)*45));
		//printf("dig : %d\t sum : %llu\n",dig,sum);
		dig--;
	}
	return sum;
}

int sumno(int b)
{
	int res;
	res = b*(b+1);
	res = res/2;
	return res;
}
int main ()
{
	while(1)
	{
		int a,b,i,j;
		long long unsigned sum,suma,sumb;
		scanf("%d",&b);
		scanf("%d",&a);
		if (a==-1 && b==-1)
		{
			return 0;
		}
		sum = 0;
		/*for (i = b; i <=a ; i++)
		{
			j = i;
			while(j!=0)
			{
				sum = sum + (j%10);
				j = j/10;
			}
		}*/
		suma = sum_dig(a);
		sumb = sum_dig(b-1);
		printf("%llu\n",suma-sumb);
	}
}