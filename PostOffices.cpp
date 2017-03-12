#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mp make_pair
const int mod = (int)1e9 + 7;
bool a[10001][10001];
bool v[10001][10001];
bool func(int x,int y,int n)
{
	LOOP(i,n+1)
		LOOP(j,n+1)
			v[i][j]=false;
	int z;
	queue<pair<int,int> > q;
	for(int i=1;i<=n;i++)
		if(a[x][i] == true)
			q.push(mp(x,i)),v[x][i]=true;
	while(!q.empty())
	{
		z=q.front().second;
		q.pop();
		for(int i=1;i<=n;i++)
		{
			if(a[z][i] == true && z!=i)
			{
				if(i == y)
					return true;
				else			
					if(!v[z][i])
						q.push(mp(z,i));
				v[z][i]=true;
			}
		}
	}
	return false;
}
int main()
{	
	int n,l;
	cin>>n>>l;
	LOOP(i,n+1)
		LOOP(j,n+1)
			a[i][j]=false,v[i][j]=false;
	int x,y;
	LOOP(i,l)
	{
		cin>>x>>y;
		a[x][y]=a[y][x]=true;
	}
	int Q;
	bool ans;
	cin>>Q;
	LOOP(i,Q)
	{
		cin>>x>>y;
		ans=func(x,y,n);
		if(ans == true)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
