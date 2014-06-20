#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int test,x,y,i,j;
	scanf("%d",&test);
	for (i = 0; i < test; i++)
	{
		scanf("%d",&x);
		scanf("%d",&y);
		if (x == y  ||  y == x-2)
		{
			if (y == x)
			{
				if (y%2==1)
				{
					printf("%d\n",2*y-1);
				}
				else
				{
					printf("%d\n",2*y);
				}
			}
			else
			{
				if (y%2 == 1)
				{
					printf("%d\n",2*y+1);
				}
				else
				{
					printf("%d\n",2*y+2);
				}
			}
		}
		else
		{
			printf("No Number\n");
		}
	}
	return 0;
}