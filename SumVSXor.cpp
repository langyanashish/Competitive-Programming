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
	LL n;
	cin>>n;
	LL ans=0;
	for(int i=0;i<=n;i++)
	{
		if(i+n == (i^n))
			ans++;
	}
	cout<<ans;
	return 0;
}

