#include<bits/stdc++.h>
using namespace std;
#define LL      long long int
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		786433
#define MOD		786433
long long int power(long long int a,long long int n)
{
	if(a==0)
		return 0;
	if(n==0)
		return 1;
	if(n % 2 == 1)
		return (power(a, n/2) %mod * power(a, n/2) %mod * a % mod) % mod;
	else
		return (power(a, n/2) % mod *power(a, n/2) %mod) % mod; 
}
int main()
{
		LL n,q;
		cin>>n;
		int a[n+2];
		for(int i=0;i<=n;i++)
			cin>>a[i];
		cin>>q;
		LL ans=0;
		LL x;
		int p=0;
		LOOP(k,q)
		{
			cin>>x;
			p=0;
			ans=0;
			for(int j=0;j<=n;j++)
			{
				ans=(ans%MOD+(a[j]%MOD * power(x,p)%MOD)%MOD)%MOD;
				p++;
			}
			cout<<ans%MOD<<endl;
		}
	return 0;
}
