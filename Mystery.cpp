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
		int a[n],temp;
		LOOP(i,n)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			temp=__gcd(a[i],a[i+1]);
			a[i+1]=temp;
		}
			cout<<temp<<endl;
	}
	return 0;
}

