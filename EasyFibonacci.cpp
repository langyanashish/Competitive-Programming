#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
int dp[1000001];
void save()
{
	dp[0]=1;
	dp[1]=1;
	int t;
	for(int i=2;i<=1000000;i++)
		dp[i]=(dp[i-1]%mod+dp[i-2]%mod)%mod;
	for(int i=1;i<=1000000;i++)
		dp[i]=(dp[i]%mod+dp[i-1]%mod)%mod;
	for(int i=1;i<=1000000;i++)
		dp[i]=(dp[i]%mod+dp[i-1]%mod)%mod;
}
int main()
{
	int t;
	cin>>t;
	save();
	while(t--)
	{
		LL n;
		cin>>n;
		if(n<=1000001)
			cout<<dp[n-1]%mod<<endl;
		else
		{
			int a=dp[1000000-1]%mod;
			int b=dp[1000000]%mod;
			int c;
			for(int i=1000002;i<=n;i++)
			{
				c=(a%mod + b%mod)%mod;
				a=b%mod;
				b=c%mod;
			}
			cout<<c%mod<<endl;
		}
	}
	return 0;
}

