/* August Challenge 2016 */
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
		LL n,m;
		cin>>n>>m;
		LL p=n*m;
		if(p&1)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
	return 0;
}

