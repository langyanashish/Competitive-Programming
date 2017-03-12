#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	int n,m;
	cin>>n>>m;
	int x[n],y[m];
	LOOP(i,n)
		cin>>x[i];
	LOOP(i,m)
		cin>>y[i];
	int Q;
	cin>>Q;
	int a,b,c,d;
	int ans;
	LOOP(i,Q)
	{
		cin>>a>>b>>c>>d;
		ans=0;
		for(int i=a-1;i<c;i++)
		{
			for(int j=b-1;j<d;j++)
				ans=ans^(x[i]^y[j]);
		}
		cout<<ans<<endl;
	}
	return 0;
}

