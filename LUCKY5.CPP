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
		string a;
		cin>>a;
		int ans=0;
		int l=a.length();
		LOOP(i,l)
		{
			if(a[i]!='4' && a[i]!='7')
				ans++;	
		}
		cout<<ans<<endl;
	}
	return 0;
}

