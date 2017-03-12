#include<bits/stdc++.h>
using namespace std;
#define ll      long long
#define pb		push_back
#define for(i,n)  for(int i=0;i<n;i++)
#define mod		1000000007
int dp[10000000]={0};
int z[10000000];
void save()
{
	dp[0]=1;
	dp[1]=2;
	for(int i=2;i<10000000;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
}
ll dpp(ll s)
{
	vector<int> a(s+1);
	for(int i=1;i<=s;i++)
	{
		for(int j=0;j<10000000;j++)
		{
			if(i-dp[j]==0)
			`x[i]=min(x[i],1+dpp(i-dp[j]));
		}
	}
	return x[s];
}
int main()
{
	save();
	ll q;
	cin>>q;
	while(q--)
	{
		ll x,k;
		cin>>x>>k;
		if(k==1)
			for(i,x)
				if(dp[i]==x)
				{
					cout<<"1\n";
					break;
				}
		else
		{
			
		}
	}
	return 0;
}

