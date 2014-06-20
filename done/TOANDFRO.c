#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	while(1)
	{
		int col,row,i,j,k,flag;
		scanf("%d",&col);
		if (col==0)
		{
			return 0;
		}
		char *str;
		str = (char *)malloc(200*sizeof(char));
		scanf("%s",str);
		row = strlen(str);
		row = row/col;
		char **string;
		string = (char **)malloc(row*sizeof(char *));
		for (i = 0; i < row; i++)
		{
			string[i] = (char*)malloc(sizeof(char)*col);
		}
		k = 0;
		flag = 0;
		for (i = 0; i < row; i++)
		{
			if (flag == 0)
			{
				for (j = 0; j < col; j++)
				{
					string[i][j] = str[k];
					k++;
				}
				flag = 1;
			}
			else if (flag == 1)
			{
				for (j = col-1; j >= 0; j--)
				{	
					string[i][j] = str[k];
					k++;
				}
				flag = 0;
			}
		}
		for (i = 0; i < col; i++)
		{
			for (j = 0; j < row; j++)
			{
				printf("%c",string[j][i]);
			}
		}
		printf("\n");
	}
}