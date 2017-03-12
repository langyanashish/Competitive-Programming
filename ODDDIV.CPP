#include<bits/stdc++.h>
using namespace std;
/*int dp[100000];
int prime[100000];
long long fn(long long num)
{
	long long sum=0;
	if(dp[num]>0)
		return dp[num];
	else{
		for(int j=1;j<=(num/2)+5;j+=2)
		if(num%j==0)
			sum+=j;	
		dp[num]=sum;
		return sum;
	}
}
void reset()
{
	for(int i=0;i<100000;i++)
	{
		dp[i]=0;
		prime[i]=0;
	}
}*/
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	long long total=0;
	long long int sum=0;
	cin>>t;
	while(t--)
	{
		long long int l,r;
		cin>>l>>r;
		total=0;
		for(int i=1;i<=r;i+=2)
		{
			total+=i*(r/i-(l-1)/i);
		}
		cout<<total<<endl;
	}
	return 0;
}
