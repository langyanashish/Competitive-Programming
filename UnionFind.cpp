#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
void makeset(int rank[],int parent[],int x)
{
	parent[x]=x;
	rank[x]=0;
}
void unionn(int rank[],int parent[],int x,int y)
{
	if(rank[x]>rank[y])
		parent[y]=x;
	else 
	{
		parent[x]=y;
		if(rank[x]==rank[y])
			rank[y]++;
	}
}
int findset(int parent[],int x)
{
	while(parent[x] != x)
		x=parent[x];
	return parent[x];
}
int main()
{
	int u,v,n,m;
	int rank[n+1],parent[n+1];
	cin>>n>>m;
	for(int i=0;i<=n;i++)
	{
		makeset(rank,parent,i);
	}
	LOOP(i,m)
	{
		cin>>u>>v;
		unionn(rank,parent,u,v);
	}
	for(int i=1;i<=n;i++)
	{
		int y=findset(parent,i);
		rank[i]=rank[y];
	}
	for(int i=1;i<=n;i++)
		cout<<rank[i]<<" ";
	return 0;
}

