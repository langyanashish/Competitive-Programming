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
	LL t;
	cin>>t;
	LL c=3;
	LL temp=c;
	temp++;
	for(long i=1;i<=t;i++)
	{
		temp--;
		if(temp==1)
		{
			temp=2*c;
			c=temp;
			temp++;
		}
	}
	cout<<temp;
	return 0;
}

