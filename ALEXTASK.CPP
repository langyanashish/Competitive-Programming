#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
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
		LL a[n];
		LOOP(i,n)
			cin>>a[i];
		LL temp,ans=INT_MAX;
		sort(a,a+n);
		for(LL i=0;i<n/2;i++)
		{
			for(LL j=i+1;j<n;j++)
			{
				temp=lcm(a[i],a[j]);
				ans=min(ans,temp);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
