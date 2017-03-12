#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int dp[30];
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=30;i++)
		dp[i]=(dp[i-1]*(i-1))+(dp[i-2]*(i-2));
	while(t--)
	{
		long long int k,n;
		cin>>k>>n;
		long long ans=0;
		long long temp=dp[n];
		int a[20];
		int k=0;
		while(temp>0)
		{
			int r=temp%10;
			a[k++]=r;
			temp/=10;
		}			
	}
	return 0;
}

