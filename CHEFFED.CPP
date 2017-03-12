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
	int n;
	cin>>n;
	int s=0,t,s2=0,r,ans=0,d=0;
	LL b=n-96;
	if(b<0)
		b=0;
	for(int x=n;x>=b;x--)
	{
		s=0;
		s2=0;
		t=x;
		while(t>0)
		{	
			r=t%10;
			s+=r;
			t/=10;
		}
		t=s;
		while(t>0)
		{
			r=t%10;
			s2+=r;
			t/=10;
		}
		if(x+s+s2 == n)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}

