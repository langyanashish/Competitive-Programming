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
	int n,k,a[10010];
	while(t--)
	{
		cin>>n>>k;
		int x=0;
		k=min(k,n-k);
		LOOP(i,n)
		{
			cin>>a[i];
		}
		//int son=0,father=0;
		sort(a,a+n);
		int i;
		for(i=0;i<k;i++)
			x-=a[i];
		for(;i<n;i++)
			x+=a[i];
		cout<<x<<endl;
	}
	return 0;
}

