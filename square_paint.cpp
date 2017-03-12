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
	LL m,n,a;
	cin>>n>>m>>a;
	cout<<((n+a-1)/a) * ((m+a-1)/a);
	return 0;
}

