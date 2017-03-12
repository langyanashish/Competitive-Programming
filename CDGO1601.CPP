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
		int n;
		cin>>n;
		int l,b;
		cin>>l>>b;
		int temp;
		LOOP(i,n)
		{
			if(l==0 && b==0)
				break;
			if(l==b)
			{
				l=0;
				b=0;
				break;
			}
			else if(l<b)
			{
				b=b-l;
			}
			else
			{
				l=l-b;
			}
		}
		if(l==0 && b==0)
			cout<<"No\n";
		else
			cout<<"Yes "<<l*b<<endl;
	}
	return 0;
}

