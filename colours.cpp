#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
#define MOD		1000000007
long long int power(long long int a,long long int n)
{
	if(n==0)
		return 1;
	if(n % 2 == 1)
		return (power(a, n/2) %MOD * power(a, n/2) %MOD * a % MOD) % MOD;
	else
		return (power(a, n/2) % MOD *power(a, n/2) %MOD) % MOD; 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL ans=1;
		int n,k;
		cin>>n>>k;
		ans=(k%mod * (k-1)%mod)%mod;
		n=n-2;
		if(n & 1)
		{
			n/=2;
			ans=(ans%mod * power( (k-1) , (n)))%mod;
			ans=(ans%mod * power( (k-2) , (n+1)))%mod;
		}
		else
		{
			n/=2;
			ans=(ans%mod * power( (k-1) , (n)))%mod;
			ans=(ans%mod * power( (k-2) , (n)))%mod;
		}
		cout<<ans%mod<<endl;
	}
	return 0;
}

