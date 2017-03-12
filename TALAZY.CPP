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
	int t;
	cin>>t;
	while(t--)
	{
		bool flag=false;
		LL n,b,m;
		cin>>n>>b>>m;
		LL ans=0;
		LL x;
		while(n >= 1)
		{
			x=n/2;
			if(n&1)
				x++;
			x=x*m;
			ans+=x;
			if(n > 1)
				ans+=b;
			n/=2;
			m*=2;
			if(n == 1)
				flag=true;
			else if(flag == true)
				break;
		}
		cout<<ans<<endl;
	}
	return 0;
}

