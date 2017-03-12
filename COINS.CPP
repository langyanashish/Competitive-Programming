#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int dp[1000000]={0};
LL ashu(LL n)
{
	if(n<12)
		return n;
	if(n==12)
		return 13;
	if(n<1000000)
		if(dp[n]!=0)
			return dp[n];
	LL two,three,four;
	two=n/2;
	three=n/3;
	four=n/4;
	LL x=ashu(two)+ashu(three)+ashu(four);
	if(n<1000000)
		dp[n]=x;
	return x;
}
int main()
{
	LL n;
	while(scanf("%lld", &n)!=EOF)
        printf("%lld\n", ashu(n));
	return 0;
}

