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
		int a,b,r,s;
		cin>>a>>b;
		s=0;
		while(a>0)
		{
			r=a%10;
			s=s*10+r;
			a/=10;
		}
		a=s;
		s=0;
		while(b>0)
		{
			r=b%10;
			s=s*10+r;
			b/=10;
		}
		b=s;
		s=a+b;
		a=0;
		while(s>0)
		{
			r=s%10;
			a=a*10+r;
			s/=10;
		}
		cout<<a<<endl;
		
	}
	return 0;
}

