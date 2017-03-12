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
		int x;
		LOOP(i,n*2)
			cin>>x;
		int result=0;
		for(int i=1;i<=n;i++)
			result^=i;
		cout<<result<<endl;
	}
	return 0;
}

