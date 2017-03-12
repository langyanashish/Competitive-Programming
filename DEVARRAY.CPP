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
	int n,q;
	cin>>n>>q;
	int a[n+1];
	LOOP(i,n)
		cin>>a[i];
	sort(a,a+n);
	int l=a[0],r=a[n-1];
	int t;
	while(q--)
	{
		cin>>t;
		if(t>=l && t<=r)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

