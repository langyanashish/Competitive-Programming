#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
int a[1000000][30];
int main()
{
	int t;
	cin>>t;
	int z,m,n;
	char p;
	while(t--)
	{
		cin>>z>>m>>n>>p;
		if(z==1)
			a[m][p-'a']+=n;
		else
		{
			int ans=0;
			for(int i=m;i<=n;i++)
			{
				ans+=a[i][p - 'a'];
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}

