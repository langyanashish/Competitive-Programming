#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
bool isPrime[1000010];
int v[1000010];
int dp[1000010];
void sieve(int N) 
{
    for(int i = 0; i <= N;++i) 
        isPrime[i] = true,dp[i]=0;
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) 
	{
        if(isPrime[i] == true) 
		{
            for(int j = i * i; j <= N ;j += i)
                isPrime[j] = false;
        }
    }
    int pos=0;
    for(int i = 2; i <= N; ++i)
    {
    	if(isPrime[i] == true)
    	{
    		v[pos]=i;
    		pos++;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	sieve(1000010);
	while(t--)
	{
		int x,y,k;
		cin>>x>>y>>k;
		int xx=x;
		bool flag=false;
		bool f=0;
		int c=0,ans=0;
		int temp;
		while(flag == false)
		{
		for(int i=y+x;i>x;i--)
		{
			temp=0;
			c=0;
			if(dp[i] > 0 )
				if(dp[i] == k)
				{
					if(x=xx)
						f=1;
					x+=i;
					c++;
					break;
				}
				else
					continue;
			else
			{
				for(int j=0;v[j]<=sqrt(i);j++)
				{
					if(i%v[j] == 0)
						temp++;
				}
				dp[i]=temp;
				if(temp == k)
				{
					if(x==xx)
						f=1;
					x+=i;
					c++;
					break;
				}
			}
		}
		if(c > 0)
			ans++;
		else if(c==0)
			flag=true;
		}
		if(f==0)
			cout<<"-1\n";
		else
			cout<<ans<<endl;
	}
	return 0;
}

