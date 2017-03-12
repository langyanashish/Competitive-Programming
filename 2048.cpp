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
	int t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		LL ans=0;
		while(n != 1)
		{
			if(n & 1)
			{
				n/=2;
				ans+=n;
				n++;
			}
			else
			{
				n/=2;
				ans+=n;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

