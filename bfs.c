//Print all the nodes reachable from a given starting node in a digraph using BFS method.

#include<stdio.h>
int a[20][20],q[20],visited[20],r=-1,f=0,i,j,n; 
void bfs(int v); 
int main(){ 
    int v; 
       printf("\nEnter no. of vertices:"); 
       scanf("%d",&n);
       for(i=1;i<=n;i++) 
        { 
         q[i]=0; 
         visited[i]=0; 
        } 
       printf ("\nEnter Adjacency Matrix of the graph:"); 
         for(i=1;i<=n;i++){ 
            for(j=1;j<=n;j++){ 
              
              scanf("%d",&a[i][j]); 
              } 
            } 
         printf("\nEnter the node of ur Choice:"); 
        scanf("%d",v); 
         bfs(v); 
         printf("\nAll the nodes reachable from v and n are:"); 
         for(i=1;i<=n;i++){ 
             if(visited[i]) 
                printf("%d",i); 
                } 
          
         return(0); 
    } 
    
    void bfs(int v){ 
         for(i=1;i<=n;i++) 
         {
                if(a[v][i] && !visited[i]) 
                    q[++r]=i; 
                if(f<=r){ 
                 visited[q[f]]=1; 
                 bfs(q[f++]); 
                 }  
         }
    }