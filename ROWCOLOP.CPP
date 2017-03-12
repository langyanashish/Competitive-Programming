#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	LL n,q;
	cin>>n>>q;
	int row[n+1],col[n+1];
	LOOP(i,n+1)
	{
		row[i]=0;
		col[i]=0;
	}
	char a[20];
	int x,y;
	LOOP(i,q)
	{
		scanf("%s",&a);
		cin>>x>>y;
		if(strcmp(a,"RowAdd")==0)
			row[x]+=y;
		else
			col[x]+=y;
	}
	int maxRow=0,maxCol=0;
	FOR(i,1,n+1)
	{
		maxRow=max(maxRow,row[i]);
		maxCol=max(maxCol,col[i]);
	}
	cout<< (maxRow + maxCol);
	return 0;
}
