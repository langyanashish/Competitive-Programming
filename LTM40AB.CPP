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
		LL a ,x, b , c , d;
		cin>>a>>b>>c>>d;
		LL m;
		LL ans=0;
		if(c<a && d<b)
		{
			cout<<"0\n";
			continue;
		}
		else if(a<c && b <c)
		{
			m=b-a+1;
			ans=m*(d-c+1);
			cout<<ans<<endl;
			continue;
		}
		if(a < c)
		{
			m=c-a;
			ans+=m*(d-c+1);
			x=c;
		}
		if(a >= c)
			x=a;
		for(LL i=x;i<=b;i++)
		{
			if(i<d)
				ans+=d-i;
		}		
		cout<<ans<<endl;
	}
	return 0;
}

