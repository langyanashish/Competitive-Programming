/* July 2016 Lunchtime*/
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int hash[110]={0};
void reset()
{
	LOOP(i,110)
		hash[i]=0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		LL n,k;
		cin>>n>>k;
		int a[n+1];
		LOOP(i,n)	
		{
			cin>>a[i];
			if(a[i]==i+1)
			{
				hash[a[i]]=-110;
				a[i]=-1;
			}
			if(a[i]>=0)
				hash[a[i]]++;
		}
		int ans=0;
		LOOP(i,110)
		{
			if(hash[i]>=k)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

