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
	LL n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	LL q,p,f,r,pr,c=0;
	cin>>q;
	int type;
	for(int i=1;i<=q;i++)
	{
		cin>>type;
		if(type == 1)
		{
			cin>>p>>f;
			a[p]=f;
		}
		if(type == 2)
		{
			pr=a[1]%mod;
			cin>>r;
			for(int k=1;(1+(k*r))<=n;k++)
				pr=(pr%mod * a[(1+k*r)]%mod)%mod;
			LL temp=pr%mod;
			temp=temp%mod;
			c=0;
			while(temp)
			{
				c=temp%10;
				temp=(temp/10)%mod;
			}
			cout<<c%mod<<" "<<pr%mod<<endl;
		}
	}
	return 0;
}

