#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
LL dp[21];
void save()
{
	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<21;i++)
		dp[i]=i*dp[i-1];
}
LL nPr(LL n , LL k)
{
	return dp[n]/(dp[n-k]);
}
int main()
{
	save();
	int n;
	cin>>n;
	LL ans=0;
	if(n == 21)
	{
		char a[22];
		a[21]='\0';
		a[10]=a[13]=a[17]=a[18]=a[19]=a[20]='0';
		a[0]='1';
		a[12]='2';
		a[1]='3';
		a[11]='4';
		a[6]='5';
		a[15]='6';
		a[4]=a[7]=a[9]='7';
		a[2]=a[3]=a[16]='8';
		a[5]=a[8]=a[14]='9';
		cout<<a;
	}
	else
	{
		if(n == 1)
			ans=0;
		else
		for(int i=n;i>1;i--)
			ans+=nPr(n,i);
		cout<<ans;
	}
	return 0;
}
