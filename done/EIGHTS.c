#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned long long  a,res;
	int test,i;
	scanf("%d",&test);
	for (i = 0; i < test; i++)
	{
		scanf("%llu",&a);
		if (a%4==1)
		{
			res = (a/4)*1000 + 192;
		}
		else if (a%4==2)
		{
			res = (a/4)*1000 + 442;
		}
		else if (a%4==3)
		{
			res = (a/4)*1000 + 692;
		}
		if (a%4==0)
		{
			res = ((a/4)-1)*1000 + 942;
		}
		printf("%llu\n",res);
	}
	return 0;
}
