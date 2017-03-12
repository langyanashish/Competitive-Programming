#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=1;i<=(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		int n,e,w;
		cin>>n>>e>>w;
		int wt[n+1];
		for(int i=1;i<=n;i++)
			cin>>wt[i];
		bool a[n+1][n+1];
		for(int i=0;i<=n;i++)
			for(int j=0;j<=n;j++)
				a[i][j]=false;
		int x,y;
		LOOP(i,e)
		{
			cin>>x>>y;
			a[x][y]=a[y][x]=true;
		}
		bool flag=false;
		for(int i=1;i<n;i++)
		{
			flag=false;
			for(int j=i+1;j<=n;j++)
			{
				if(a[i][j]==1 && wt[j]>=w)
					flag=true;
			}
			if(flag==false)
				break;
		}
		if(flag==false)
			cout<<"Case #"<<j<<": NO"<<endl;
		else
			cout<<"Case #"<<j<<": YES"<<endl;
	}
	return 0;
}

