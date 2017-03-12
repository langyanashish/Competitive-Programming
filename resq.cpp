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
		int n;
		cin>>n;
		int x,y;
		int ans=INT_MAX;
		for( x=1;x<sqrt(n)+1;x++)
		{
			if(n%x == 0)
			{
				y=n/x;
				ans=min(ans,abs(y-x));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

