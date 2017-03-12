#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
bool dp[100000010];
void Sieve()
{
    memset(dp, true, sizeof(dp));

    for (int p=2; p*p<=10000100; p++)
    {
        if (dp[p] == true)
        {
            for (int i=p*2; i<=10000100; i += p)
                dp[i] = false;
        }
    }
}/*
void save()
{
	LOOP(i,100000000)
		dp[i]=0;
	for(int i=2;i<=1000;i++)
	{
		for(int j=2;j<=100000;j++)
			dp[i*j]=1;
	}
}*/
int main()
{
	int t;
	cin>>t;
	Sieve();
	while(t--)
	{
		LL n;
		cin>>n;
		if(dp[n]==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

