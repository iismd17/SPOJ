#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	long long int arr[N+1], ans;
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%lld",&arr[i]);
		if (i>0)
		{
			ans = arr[i]^ans;
		}
		else
			ans = arr[0];
	}
	printf("%lld\n",ans);
	return 0;
}