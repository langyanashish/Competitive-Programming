#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	LL n;
	cin>>n;
	string s;
	cin>>s;
	LL ans=0,c;
		c=1;
		for(LL j=0;j<n;j++)
		{
			if(s[j]=='<')
				c--;
			else
				c++;
		}
	if(c<1 || c>n)
		ans++;
	for(LL i=2;i<=n;i++)
	{
		c++;
		if(c<1 || c>n)
			ans++;
	}
	cout<<ans;
	return 0;
}

