#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int visited[20];
int adj[20][20];
int v;
void dfs(int a);
void main()
{
	int i,j;
    system("cls");
	printf("Enter the number of vertices: ");
	scanf("%d",&v);
	printf("\nEnter the adjacency matrix of the graph: ");
	for(i=1;i<=v;i++)
	{
	    for(j=1;j<=v;j++)
		{
			scanf("%d",&adj[i][j]);
		}

	}
	for(i=0;i<v;i++)
	{
		visited[i]=0;
	}
	dfs(1);
	getch();
}
void dfs(int a)
{
	int i;
	printf("%d",a);
	visited[a]=1;
	for(i=1;i<=v;i++)
	{
		if(adj[a][i]==1&&visited[i]==0)
		{
			dfs(i);
		}
	}
}

