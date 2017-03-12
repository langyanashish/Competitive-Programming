#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = 10007;

int main()
{
	LL n;
	cin>>n;
	LL ans=0;
	LL a[n+2];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int pos=n;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		ans+=a[i]*a[pos];
		ans%=mod;
		pos--;
	}
	cout<<ans;
	return 0;
}

