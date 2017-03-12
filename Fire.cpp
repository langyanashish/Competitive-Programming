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
		int n;
		cin>>n;
		int a[n];
		int x=0;
		LOOP(i,n)
		{
			cin>>a[i];
			x=x^a[i];
		}
		if(x == 0)
			cout<<"0\n";
		else
		{
			int y=0,ans=INT_MAX;
			LOOP(i,n)
			{
				y=a[i]^x;
				ans=min(ans,y);
			}
			cout<<ans<<endl;
		}
	return 0;
}

