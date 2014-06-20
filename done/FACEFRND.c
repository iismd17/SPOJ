#include <stdio.h>
#include <stdlib.h>

typedef struct List
{
	/* data */
	struct List *p;
	int ID;
//	int rep = 0;
} list;

list *create_node(int val)
{
	list *n;
	n = malloc(sizeof(list));
	n->ID = val;
	n->p = NULL;
	return n;
}
//typedef struct List list;

int main()
{
	/*taking input */

	list *f,*ff,*fr,*fof,*q,*tmp,*tmp1,*ff_1;
	int i,j,no_frnds,no_fofs,tmp_f,tmp_ff;
	//f = (list *)malloc(sizeof(list));
	//ff = (list *)malloc(sizeof(list));
//	fr = (list *)malloc(sizeof(list));
	fof = (list *)malloc(sizeof(list));
//	q = (list *)malloc(sizeof(list));
	fof = NULL;
	ff = NULL;
	f = NULL;
	fr = NULL;
	//printf("%d\n",fof->ID);
	//f->p = NULL;
	//ff->p = NULL;
	scanf("%d",&no_frnds);
	//printf("%d\n",no_frnds);
	//fr = f;
	//fof = ff;
	for (i = 0; i < no_frnds; i++)
	{
		/* code */
		scanf("%d",&tmp_f/*&f->ID*/);
		//printf("%d\n",tmp_f );
		tmp1 = create_node(tmp_f);
		//f = f_node;
		if (fr == NULL)
		{
			fr = tmp1;
		}
		else
		{
			f = fr;
			while(f->p != NULL)
			{
				f = f->p;
			}
			f->p = tmp1;
		}
		scanf("%d",&no_fofs);
		//printf("%d\n",no_fofs);
		j=0;
		while(j<no_fofs)
		{
			scanf("%d",&tmp_ff/*&ff->ID*/);
			//printf("%d\n",tmp_ff);
			tmp = create_node(tmp_ff);
			if (fof == NULL)
			{
				fof = tmp;
			}
			else
			{
				ff = fof;
				while(ff->p != NULL)
				{
					ff = ff->p;
				}
				ff->p = tmp;
				//tmp->p = NULL;
			}
			//printf("%p\n",ff);
			//printf("check %d\t%d\n",ff->ID,fof->ID);
			//ff = ff->p;
			//printf("%p\n",ff);
			j++;
		}
		//f = f->p;
	}
	//printf("dawood %d\n",fof->ID);
	//ff->p = NULL;
	//f->p = NULL;
	// select for matching ones from f and fof and delete them in fof and also the repeating ones.
	ff = fof;
	f = fr;
	//printf("%d\n",ff->ID);
	while(ff != NULL)
	{
	//	printf("dawood\n");
		//printf("fof %d\n",ff->ID);
		ff = ff->p;
	}
	while(f != NULL)
	{
	//	printf("dawood\n");
		//printf("fr %d\n",f->ID);
		f = f->p;
	}
	
	f = fr;
	/*search and remove all the ids that are common in fr to fof*/
	while(f != NULL)
	{
		//printf("1\n");
		ff = fof;
		q = ff;
		while((ff!=NULL) /*&& (ff->p != NULL)*/)		//while fof is not finished
		{
			if (f->ID == ff->ID)
			{
				//printf("phasa  %d\n",ff->ID);
				if (ff == fof)
				{
					fof = fof->p;
					ff = fof;
				}
				else if (ff!=fof)
				{
					q->p = ff->p;
					//q = ff;
					ff = ff->p;
				}
			}
			else
			{
				q = ff;
				ff = ff->p;
			}
		}
		f = f->p;
	}
	//the fof list after removing fr from fof :)
	ff = fof;
	//printf("dawood\n");
	while(ff != NULL)
	{
//		printf("dawood\n");
		//printf("Your list --> %d\n",ff->ID);
		ff = ff->p;
	}

	/*Now remove duplicates in fof*/
	ff = fof;
	ff_1 = fof;
	while(ff_1 != NULL)
	{
		//printf("1\n");
		ff = ff_1->p;
		q = ff_1;
		while((ff!=NULL) /*&& (ff->p != NULL)*/)		//while fof is not finished
		{
			if (ff_1->ID == ff->ID)
			{
				//printf("phasa 2nd time waala  %d\n",ff->ID);
				q->p = ff->p;
				//q = ff;
				ff = ff->p;
			}
			else
			{
				q = ff;
				ff = ff->p;
			}
		}
		ff_1 = ff_1->p;
	}
	ff = fof;
	int count = 0;
	while(ff!=NULL)
	{
		//printf("final->%d\n",ff->ID);
		ff = ff->p;
		count += 1;
	}
	printf("%d\n",count);
	return 0;
}