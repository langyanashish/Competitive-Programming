#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
//500000
int dp[500009]={0};
void save()
{
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	for(int i=3;i<500009;i++)
	{
		for(int j=1;j<i/2+1;j++)
		{
			if(i%j==0)
			{
				dp[i]+=j;
			}
		}
	}
}
int main()
{
	save();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
	return 0;
}

