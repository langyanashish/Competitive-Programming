#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int x[100010];
int y[100010];
int main()
{
		int n,b;
		cin>>n>>b;
		for(int i=1;i<=b;i++)
			cin>>x[i];
		for(int i=1;i<=b;i++)
			cin>>y[i];
		LL ans=0,c=0;
		for(int i=1;i<=b;i++)
		{
			if(x[i]!=y[i])
			{
				if((x[i]==1 && y[i]==n) || (x[i]==n && y[i]==1))
				{
					continue;
				}
				else
				{
					c=min(y[i]-1,n-y[i])+min(x[i]-1,n-x[i]);
					ans+=c;
				}
			}
			else if(x[i]==y[i])
			{
				if(x[i]!=1 && x[i]!=n)
				{
					c=min(y[i]-1,n-y[i])+min(x[i]-1,n-x[i]);
					ans+=c;
				}
			}
		}
		cout<<ans<<endl;
	return 0;
}
