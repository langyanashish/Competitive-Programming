#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
int dp[10005];
void save()
{
	dp[0]=0;
	dp[1]=1;
	dp[2]=11;
	int x=19;
	for(int i=3;i<1005;i++)
	{
		dp[i]=dp[i-1]+x;
		x+=9;
	}
}
int main()
{
	int t;
	cin>>t;
	save();
	for(int j=1;j<=t;j++)
	{
		int n;
		cin>>n;
		int ans=0;
		for(int i=1;dp[i];i++)
		{
			if(dp[i]>=n)
			{
				ans=i;
				break;
			}
		}	
		//	Case #1: 5
		cout<<"Case #"<<j<<": "<<ans<<endl;
	}
	return 0;
}

