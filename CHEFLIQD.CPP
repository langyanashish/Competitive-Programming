#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,x;
		cin>>n>>m>>k;
		int a[k+1],b[n+1],c[n+1];
		LOOP(i,k)
			cin>>x;
		LOOP(i,n)
			cin>>b[i];
		LOOP(i,n)
			cin>>c[i];
		int ans=0;
		LOOP(i,n)
		{
			if( c[i]<=x && b[i]<=m )
			{
				ans=max(ans,c[i]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

