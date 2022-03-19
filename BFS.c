#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 100
int adj[max][max],visited[max],q[max];
int r=-1,f=-1;
void insert(int item);
int delete();
void bfs(int k,int v);
void main()
{
	int i,a,b,z,j,v,e;
	system("cls");
	printf("Enter the number of vertices and edges : ");
	scanf("%d%d",&v,&e);
	for(i=1;i<=e;i++)
	{
		printf("\nEnter edge %d: ",i);
		scanf("%d%d",&a,&b);
		adj[a][b]=1;
	}
	for(j=0;j<v;j++)
	{
		visited[j]=0;
	}
	printf("\nEnter start vertex for BFS: ");
	scanf("%d",&z);
	bfs(z,v);
	getch();
}
void insert(int item)
{
	r++;
	q[r]=item;
}
int delete()
{
	f++;
	return q[f];
}
void bfs(int k,int v)
{
	int i;
	printf("%d",k);
	visited[k]=1;
	insert(k);
	while(r!=f)
	{
		int node =delete();
		for(i=1;i<=v;i++)
		{
			if(adj[node][i]==1&&visited[i]==0)
			{
				printf("\t%d",i);
				visited[i]=1;
				insert(i);
			}
		}
	}
}



