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
		LL c,d,l;
		cin>>c>>d>>l;
		LL n;
		LL m=(c+d)*4;
		if(c<=2*d)
			n=d*4;
		else if(c > 2*d)
			n=d*4+(c-(2*d))*4;
		if(l%4==0 && l>=n && l<=m)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
