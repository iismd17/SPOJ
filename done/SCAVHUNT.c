#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
	char * fir;
	char * sec;
}node;

node create_node(char*f,char*s)
{
	node p;
	p.fir = (char*)malloc(strlen(f));
	p.sec = (char*)malloc(strlen(s));
	strcpy(p.fir,f);
	strcpy(p.sec,s);
	return p;
}

int main()
{
	int i,len,steps,test,j,check,realtest;
	node p,q,r,tmp;
	scanf("%d",&test);
	realtest = test;
	while(test>0)
	{
		scanf("%d",&steps);
		len = steps - 1;
		node *array;
		array = (node*)malloc(sizeof(node)*len);
		/*for (i = 0; i < len; i++)
		{
			array[i] = (node*)malloc(sizeof(node));
		}*/
		//take input
		i = 0;
		char *f,*s;
		while(i<len)
		{
			f = (char *)malloc(100*sizeof(char));
			s = (char *)malloc(100*sizeof(char));
			scanf("%s",f);
			scanf("%s",s);
			p = create_node(f,s);
			array[i] = p;
			i++;
		}
		//print it
		/*i = 0;
		while(i<len)
		{
			printf("%s\n",array[i].fir);
			printf("%s\n",array[i].sec);
			i++;
		}*/
		//find the first one
		i = 0;
		check = 0;
		while(i<len && check!=1)
		{
			j = 0;
			while(j<len)
			{
				if(strcmp(array[i].fir,array[j].sec) != 0)
				{
					j++;
				}
				else
				{
					break;
				}
			}
			if (j == len)
			{
				check = 1;
				break;
			}
			i++;
		}
		if (check == 1)
		{
			tmp = array[0];
			array[0] = array[i];
			array[i] = tmp;
		}
		//check for all others
		i = 0;
		while(i < len-1)
		{
			j=i;
			while(j<len)
			{
				if (strcmp(array[i].sec,array[j].fir) == 0)
				{
					break;
				}	
				else
				{
					j++;
				}
			}
			tmp = array[i+1];
			array[i+1] = array[j];
			array[j] = tmp;
			i++;
		}
		i = 0;
		printf("Scenario #%d:\n",realtest-test+1);
		while(i<len-1)
		{
			printf("%s\n",array[i].fir);
			//printf("%s\n",array[i].sec);
			i++;
		}
		printf("%s\n",array[i].fir);
		printf("%s\n",array[i].sec);
		printf("\n");
		test--;
	}
	return 0;
}