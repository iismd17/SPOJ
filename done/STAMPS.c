#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	struct Node *next;
	int num;
}node;

node *master;

node* create_node(int num)
{
	node *p;
	p = malloc(sizeof(node));
	p->num = num;
	p->next = NULL;
	return p;
}

void insert_node(node *p)
{
	if (master==NULL)
	{
		master = p;
		return ;
	}
	else
	{
		node *q = master;
		node *r;
		while(q != NULL && q->num > p->num)
		{
			r=q;
			q = q->next;
		}
		if (q==master)
		{
			p->next = master;
			master = p;
			return;
		}
		else
		{
			if (r->next == NULL)
			{
				r->next = p;
				return;
			}
			else
			{
				p->next = r->next;
				r->next = p;
				return;
			}
		}
	}
}

int main ()
{
	int a,b,c,d,raymond,no_fr,fr,val,test,check,count,sum,t;
	node *p,*q;
	scanf("%d",&test);
	t = test;
	while(test > 0)
	{
		scanf("%d",&raymond);
		scanf("%d",&no_fr);
		fr = no_fr;
		master = NULL;
		while(fr > 0)
		{
			scanf("%d",&val);
			p = create_node(val);
			insert_node(p);
			check = master->num;
			fr--;
		}
		fr = no_fr;
		q = master;
		count = 0;
		sum = 0;
		q = master;
		while(q!=NULL)
		{
			sum = q->num + sum;
			count++;
			if (sum>=raymond)
			{
				break;
			}
			q = q->next;
		}
		if (q == NULL)
		{
			printf("Scenario #%d:\nimpossible\n",t-test+1);
		}
		else
		{
			printf("Scenario #%d:\n%d\n",t-test+1,count);
		}
		test--;
		if (test != 0)
		{
			printf("\n");
		}
	}
	return 0;
}