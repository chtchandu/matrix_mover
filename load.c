#include<stdio.h>
#include<stdlib.h>

void display(int a[5][5])
{
	int k,l;
	for(k=0;k<5;k++)
	{
		printf("\n---------------------------------------------------\n");
		for(l=0;l<5;l++)
		{
			printf("%d\t |",a[k][l]);
		}
	}
	printf("\n-----------------------------------------------------\n");	
}

int main()
{
	int a[5][5]={0};
	char ch;
	int i,j;
	
	printf("enter the elements \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	display(a);
	i=0;
	j=0;
	
	while(i!=4 || j!=4)
	{
		printf("\nenter movement\n");
		scanf("%c",&ch);
		
		if(ch == 'u')
		{
			if(i==0)
			{
				printf("not applicable\n");
			}
			else
			{
				a[i-1][j]=a[i-1][j]+a[i][j];
				display(a);
				i=i-1;
			}
		}
		
		else if(ch == 'd')
		{
			if(i == 4)
			{
				printf("not applicable\n");
			}
			else
			{
				a[i+1][j] = a[i+1][j] + a[i][j];
				display(a);
				i=i+1;
			}
		}
		else if(ch == 'l')
		{
			if(j == 0)
			{
				printf("not applicable\n");
			}
			else
			{
				a[i][j-1] = a[i][j-1] + a[i][j];
				display(a);
				j=j-1;
			}
		}
		else if(ch == 'r')
		{
			if(j == 4)
			{
				printf("not applicable\n");
			}
			else
			{
				a[i][j+1] = a[i][j+1] + a[i][j];
				display(a);
				j=j+1;
			}
		}
	}
	return 0;
}

/*
1  
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
*/
