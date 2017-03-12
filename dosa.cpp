#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	LL t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		LL k=n % 10;
		if(k & 1)
			cout<<"NO\n";
		else
			cout<<"YES\n";	
	}
	return 0;
}

