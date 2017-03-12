#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
int dp[10005];
void save()
{
	for(LL i=0;i<10005;i++)
		dp[i]=i;
	for(LL i=1;i<10005;i++)
		dp[i]=dp[i-1]+dp[i];
}
long long int power(long long int a,long long int n)
{
	if(n==0)
		return 1;
	if(n % 2 == 1)
		return (power(a, n/2)* power(a, n/2) * a );
	else
		return (power(a, n/2) *power(a, n/2)); 
}
int main()
{
	LL t;
	cin>>t;
	save();
	//cout<<dp[100000];
	for(int j=1;j<=t;j++)
	{
		LL n,k;
		cin>>n>>k;
		LL ans=dp[n];
		for(LL i=1 ; power(k,i) <= n ; i++)
			ans=ans-power(k,i);
		cout<<"Case #"<<j<<": "<<ans<<endl;
	}
	return 0;
}
