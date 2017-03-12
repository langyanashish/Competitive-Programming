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
	int n,c;
	cin>>n>>c;
	int a[n+1];
	LOOP(i,n)
		cin>>a[i];
	int ans=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]-a[i-1] <= c)
			ans++;
		else
			ans=1;
	}
	cout<<ans<<endl;
	return 0;
}

