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
		int a[n+1];
		LOOP(i,n)
			cin>>a[i];
		int g=a[0];
		for(int  i=1;i<n;i++)
			g=__gcd(g,a[i]);
		cout<<g<<endl;
	}
	return 0;
}

