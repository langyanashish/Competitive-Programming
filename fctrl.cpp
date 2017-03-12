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
		int i=1,ans=0,q;
		while(1)
		{
			q=n/pow(5,i);
			ans+=q;
			i++;
			if(q==0)
				break;
		}
		cout<<ans<<endl;
	}
	return 0;
}

