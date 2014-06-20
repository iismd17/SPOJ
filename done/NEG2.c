#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int bin;
	struct Node *next;
}node;

node* create_node(int val)
{
	node *p;
	p = (node *)malloc(sizeof(node));
	p->bin = val;
	p->next == NULL;
	return p;
}

int main()
{
	long long int tobe_div,inp;
	int rem;
	node *head,*p;
	head = NULL;
	scanf("%lld",&inp);
	tobe_div = inp;
	if (tobe_div == 0)
	{
		printf("0\n");
		return 0;
	}
	while(tobe_div != 0)
	{
		if (tobe_div > 0)
		{
			rem = tobe_div%(-2);
			//printf("rem : %d\t quot : %lld\n",rem,tobe_div);
			p = create_node(rem);
			tobe_div = tobe_div/(-2);
			if (head == NULL)
			{
				head = p;
			}
			else
			{
				p->next = head;
				head = p;
			}
		}
		else if (tobe_div < 0)
		{
			rem = tobe_div%(-2);			
			if (rem == -1)
			{
				rem = 1;
			}
			//printf("rem : %d\t quot : %lld\n",rem,tobe_div);
			p = create_node(rem);
			if (tobe_div%2 == 0)
			{
				tobe_div = (tobe_div/(-2));
			}
			else
			{
				tobe_div = (tobe_div/(-2)) + 1;
			}
			if (head == NULL)
			{
				head = p;
			}
			else
			{
				p->next = head;
				head = p;
			}
		}
	}
	p = head;
	while(p!=NULL)
	{
		printf("%d",p->bin);
		p = p->next;
	}
	printf("\n");
	return 0;
}