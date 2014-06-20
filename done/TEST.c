#include<stdio.h>
int main()
{
	int i,j;
	j=0;
	while (1)
	{
		scanf("%d",&i);
		if(i==42)
		{
			break;
		}
		else
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
