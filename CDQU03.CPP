#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MAX 10000001
long long int power(long long int base,long long int exp)
{
	if(exp==0)
		return 1;
	if(exp==1)
		return base;
	long long int ans=(power(base,exp/2)%MOD+MOD)%MOD;
	if(exp & 1)
	 	return (ans*ans*base)%MOD;
	else
		return (ans*ans)%MOD;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int dp[100000]={0};
		long long int ans=0;;
		int n;
		cin>>n;
		dp[0]=7;
		for(int i=1;i<n;i++)
		{
			dp[i]=(dp[i-1]+(7*power(10,i))%MOD)%MOD;
		}
		for(int i=0;i<n;i++)
		{
			ans=(ans+dp[i]%MOD)%MOD;
		}
		cout<<ans<<endl;
	}
	return 0;
}

