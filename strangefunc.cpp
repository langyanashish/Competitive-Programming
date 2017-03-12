#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
LL F(LL x)
{
	LL s=0;
	while(x>0)
	{
		s+=x%10;
		x/=10;
	}
	return s;
}
LL solve(LL X,LL N)
{
	LL ans=X;
	while(X!=F(X))
	{
		ans+=F(X);
		X=F(X);
	}
	if(ans==N)
		return 1;
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		int ans=0;
		for(int i=0; n-i>0 && i<=200 ; i++)
			ans+=solve(n-i,n);
		cout<<ans<<endl;
	}
	return 0;
}

