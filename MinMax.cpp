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
	LL n,q;
	cin>>n>>q;
	LL a[n];
	LL m=INT_MAX,N=INT_MIN;
	LOOP(i,n)
	{
		cin>>a[i];
		m=min(m,a[i]);
		N=max(N,a[i]);
	}
	LL t;
	LOOP(i,q)
	{
		cin>>t;
		if(t>=m && t<=N)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

