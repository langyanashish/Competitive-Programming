#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int hash1[150],hash2[150];
void reset()
{
	LOOP(i,150)
	{
		hash1[i]=0;
		hash2[i]=0;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		string a,b;
		cin>>a>>b;
		int l1=a.length();
		int l2=b.length();
		LOOP(i,l1)
			hash1[a[i]]++;
		LOOP(i,l2)
			hash2[b[i]]++;
		int ans=0;
		LOOP(i,150)
			ans+=min(hash1[i],hash2[i]);
		cout<<ans<<endl;
	}
	return 0;
}

