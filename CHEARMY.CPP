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
		LL k;
		cin>>k;
		k=k-1;
		LL ans=0;
		LL r=0,s=1;
		while(k > 0)
		{
			r=k%5;
			ans+=2 * r * s;
			k/=5;
			s*=10;
		}
		cout<<ans<<endl;
	}
	return 0;
}

