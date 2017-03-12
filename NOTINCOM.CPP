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
		int n,m,x;
		cin>>n>>m;
		map<int,bool>b;
		b.clear();
		int a[n];
		LOOP(i,n)
			cin>>a[i];
		LOOP(i,m)
		{
			cin>>x;
			b[x]=true;
		}
		int ans=0;
		LOOP(i,n)
		{
			if(b[a[i]] == true)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

