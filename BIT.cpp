#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int solve(int n)
{
	int r=0;
	while(n)
	{
		r+=n&1;
		n/=2;
	}
	return r;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			ans+=solve(i);
		}
		cout<<ans<<endl;
	}
	return 0;
}

