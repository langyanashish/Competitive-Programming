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
		sort(a,a+n);
		int cost=0;
		for(int i=n-1;i>=0;i-=4)
		{
			cost+=a[i];
			if(i>0)
				cost+=a[i-1];	
		}
		cout<<cost<<endl;
	}
	return 0;
}

