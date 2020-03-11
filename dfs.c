
/* Check whether a given graph is connected or not using DFS method.*/

#include<stdio.h>
int a[20][20],n,visited[20],s[20],top=-1,c=1,flag=0;
void dfs(int v)
{
	visited[v]=1;
	s[++top]=v;
	
	for(int i=1;i<=n;i++)
	{
		if(a[v][i]==1 && !visited[i])
		{
			flag=1;
			c++;
			//i will be counted
			dfs(i);
		}
		
	}
	if(flag==0)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[s[top]][j]==1 && !visited[j])
			{
				flag==1;
				c++;
				//it's for j
				dfs(j);
			}
			
		}
		if(flag==0)
			top--;
	}
	

}

int main()
{
	int v;
	printf("enetr number of vertices");
scanf("%d",&n);
printf("enter the adjacency matrix");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
	}

	for(int i=1;i<=n;i++)
		visited[i]=0;
	
	
	dfs(1);
	
	if(c==n)
	printf("connected graph\n");
	else
	printf("not connected\n");
	

	return 0;
}