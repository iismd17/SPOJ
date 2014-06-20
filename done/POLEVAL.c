/*n: degree of polynomial.
cn cn-1 … c2 c1 c0: coefficients of the polynomial separated by a single space.
k: number of points to evaluate the polynomial.
x1 x2 … xk-1 xk: points to evaluate the polynomial separated by a single space.*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int a,b,c,d,i,j,k,case_no,n,l;
	long long int pol_term,x_term;
	case_no = 0;
	while(1)
	{
		scanf("%d",&n);
		if (n == -1)
		{
			return 0;
		}
		else
		{
			case_no++;
			int *c;
			c = (int *)malloc((n+1)*sizeof(int));
			i=0;
			while(i<=n)
			{
				scanf("%d",&c[i]);
				i++;
			}
			scanf("%d",&k);
			int *x;
			x = (int *)malloc((k)*sizeof(int));
			i=0;
			while(i<k)
			{
				scanf("%d",&x[i]);
				i++;
			}
			printf("Case %d:\n",case_no);
			i = 0;
			while(i<k)
			{
				pol_term = 0;
				j = 1;
				pol_term = c[0];
				while(j<=n)
				{
					pol_term = c[j] + x[i]*pol_term;
					j++;
				}
				/*while(j<=n)
				{
					l = n-j;
					//x_term = 1;
					x_term = pow(x[i],l);
					/*while(l>0)
					{
						x_term = x_term*x[i];
						l--;
					}
					pol_term = pol_term + (x_term * c[j]);
					j++;
				}*/
				printf("%lld\n",pol_term);
				i++;
			}
		}
	}
}