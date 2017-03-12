#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define MOD		131071393213 
const int mod = (int)1e9 + 7;
bool isp(LL x)
{
	if(x<=1) return false;
	if(x<=3) return true;
	if(x%2==0||x%3==0) return false;
	for(int i=5;i*i<=x;i+=6)
		if(x%i==0||x%(i+2)==0) 
			return false;
	return true;
}
int main()
{
	int n;
	cin>>n;
	vector<LL>v;
	LL temp;
	LL ans=1;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		v.PB(temp);
	}
	bool c;
	LL xx;
	for(int i=0;i<n;i++)
	{
		c=isp(v[i]);
		if(c)
			xx=v[i];
		else
			xx=1;
		ans=(ans*xx) % MOD ;
	}
	cout<<ans<<endl;
	return 0;
}

