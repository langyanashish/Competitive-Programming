#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define min(a,b)	(a<b?a:b)
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int d=0;
	long long ans=1;;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<(k+i);j++)
		{
			d=min(d,a[j]*a[i])%mod;
		}
		ans=(ans * d)%mod;
	}
	cout<<ans<<endl;
	return 0;
}

