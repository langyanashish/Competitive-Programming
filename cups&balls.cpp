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
	int n,c,q,l,r,x;
	while(t--)
	{
		cin>>n>>c>>q;
		x=c;
		LOOP(i,q)
		{
			cin>>l>>r;
			if(x>=l && x<=r)
				x=l+r-c , c=x;
			
		}
		cout<<x<<endl;
	}
	return 0;
}

