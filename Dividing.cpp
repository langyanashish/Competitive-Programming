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
	long long n;
	cin>>n;
	LL x;
	LL sum=0;
	LOOP(i,n)
	{
		cin>>x;
		sum+=x;
	}
	LL s=(LL)(n*(n+1))/2;
	if(s==sum)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}

