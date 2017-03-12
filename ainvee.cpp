#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
LL dp[60000];
void save()
{
	LOOP(i,60000)
		dp[i]=i*i;
}
int main()
{
	save();
	LL t;
	cin>>t;
	LOOP(i,500)
		cout<<i<<" "<<dp[i]<<endl;
	while(t--)
	{
		LL n;
		cin>>n;
		LL ans=0;
		for(LL i=n/2;i>0;i--)
		{
			if(dp[i]<= n)
			{
				ans++;
				n-=dp[i];
				//cout<<dp[i]<<" "<<n<<endl;
				if(n==0)
					break;
				i++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

