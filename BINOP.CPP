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
		string a,b;
		cin>>a;
		cin>>b;
		int l=a.length();
		bool ALL0=true,ALL1=true;
		LOOP(i,l)
		{
			if(a[i]=='1')	
				ALL0=false;
			if(a[i]=='0')
				ALL1=false;
		}
		if(ALL1 || ALL0)
			cout<<"Unlucky Chef\n";
		else
		{
			int c120=0,c021=0;
			LOOP(i,l)
			{
				if(a[i]=='1' && b[i]=='0')
					c120++;
				if(a[i]=='0' && b[i]=='1')
					c021++;
			}
			cout<<"Lucky Chef\n"<<max(c120,c021)<<endl;
		}
	}
	return 0;
}

