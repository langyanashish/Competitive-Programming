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
	int t;
	cin>>t;
	while(t--)
	{
		LL n,x;
		scanf("%lld%lld",&n,&x);
		LL ans=n%x;
		if(ans == 0)
			ans=x;
		printf("%lld\n",ans);
	}
	return 0;
}

