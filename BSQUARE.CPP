#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
LL lcm(LL a, LL b)
{
    return (a*b)/__gcd(a, b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		LL ans;
		LL x=lcm(n*4,n+1);
		ans=x/(n+1);
		cout<<ans<<endl;
	}
	return 0;
}

