#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int fact[100010]={0};
int a[100010]={0};
void save()
{
	fact[0]=1;
	fact[1]=1;
	for(int i=2;i<100010;i++)
		fact[i]=(i%mod * fact[i-1]%mod)%mod;
}
/*
LL fact(LL n)
{
	if(n==1)
		return 1;
	else
		return ( n%mod * fact(n-1)%mod)%mod;
}*/
int main()
{
	int t;
	cin>>t;
	LL n,k;
	LL ans;
	save();
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(k==1)
			ans=n%mod;
		else if(n >= k)
		{
			ans=((fact[n] %mod) / ( ((fact[n-k]%mod) * ((fact[k]%mod) %mod)%mod)%mod))%mod;
			ans+=k/2;
		}
		else
		{
			LL p=k%n;
			ans=((fact[n] %mod) / ( ((fact[n-p]%mod) * ((fact[p]%mod) %mod)%mod)%mod))%mod;
			ans+=k/2;	
		}
		cout<<ans<<endl;
	}
	return 0;
}

