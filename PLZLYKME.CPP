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
		LL l,d,s,c;
		cin>>l>>d>>s>>c;
		LL temp=0;
		bool flag=false;
		if(s>=l)
			flag=true;
		else
		LOOP(i,d-1)
		{
			s+=(c*s);
			if(s>=l)
			{
				flag=true;
				break;
			}
		}
		if(flag==false)
			cout<<"DEAD AND ROTTING\n";
		else
			cout<<"ALIVE AND KICKING\n";
	}
	return 0;
}

