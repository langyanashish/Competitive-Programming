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
		int a[n+1],b[n+1];
		LOOP(i,n)
			cin>>a[i];
		b[n-1]=1;
		for(int i=n-2;i>=0;i--)
		{
			if( (LL)a[i] * (LL)a[i+1] < 0 )
				b[i]=b[i+1] + 1;
			else
				b[i]=1;
		}
		LOOP(i,n)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}

