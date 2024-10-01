#include<stdio.h>
#include<limits.h>
#define v 6
int graph[v][v]={
{0,4,0,0,0,0},
{4,0,8,0,0,0},
{0,8,0,7,0,4},
{0,0,7,0,9,14},
{0,0,0,9,0,10},
{0,0,4,14,10,0}
};
void dijkstra(int source)
{
int dist[v];
int visited[v];
int i,j;
clrscr();
for(i=0;i<v;i++)
{
dist[i]=INT_MAX;
visited[i]=0;
}
dist[source]=0;
for(i=0;i<v;i++)
{
int min_dist=INT_MAX;
int min_index;
for(j=0;j<v;j++)
{
if(!visited[j]&&dist[j]<min_dist)
{
min_dist=dist[j];
min_index=j;
}
}
visited[min_index]=1;
for(j=0;j<v;j++)
{
if(!visited[j]&&graph[min_index][j]&&dist[min_index]+graph[min_index][j]<dist[j])
{
dist[j]=dist[min_index]+graph[min_index][j];
}
}
}
printf("shortest distances from vertex%d:\n",source);
for(i=0;i<v;i++)
{
printf("%d->%d:%d\n",source,i,dist[i]);
}
}
int main()
{
dijkstra(1);
getch();
}
