#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int divby2 (long long unsigned int n)
{
	while(n%2 == 0)
	{
		n = n/2;
	}
	if (n != 1)
	{
		return 0;
	}
	return 1;
}

int main ()
{
	long long unsigned int n;
	scanf("%llu",&n);
	if (divby2(n))
	{
		printf("TAK\n");	
	}
	else
	{
		printf("NIE\n");
	}
	return 0;
}