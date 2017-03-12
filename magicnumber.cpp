#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000
bool isMagic[mod];
bool isPrime[mod];
//vector<bool> isMagic;
//vector<bool> isPrime;
void reset()
{
	LOOP(i,mod)
	{
		//isPrime[i] = true;
		isMagic[i]=false;
	}
}
void sieve(LL M,LL N)
{
	//isPrime.resize(mod+9);
	//isMagic.resize(mod+9);
    for(LL i = M; i <= N; ++i) 
	{
       		for(LL j=2;j<=sqrt(i);j++)
	   			if(i%j==0)
				{
					isPrime[i-M]=false;
					break;
				}
    }
}
bool isp(int x)
{
	if(x<=1) return false;
	if(x<=3) return true;
	if(x%2==0||x%3==0) return false;
	for(int i=5;i*i<=x;i+=6)
		if(x%i==0||x%(i+2)==0) 
			return false;
	return true;
}
void magic(LL M,LL N)
{
	LL sum=0,temp,mul=1;
	int r;
	for(int LL i=M;i<=N;i++)
	{
		if(isp(i))
		{
			sum=0,mul=1;
			temp=i;
			while(temp)
			{
				r=temp%10;
				sum+=r;
				mul*=r;
				temp/=10;
			}
			if(sum%2==0 && mul%2==0)
				isMagic[i-M]=true;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	//isPrime.clear();
	//isMagic.clear();
	while(t--)
	{
		reset();
		LL m,n;
		cin>>m>>n;
		int ans=0;
		//sieve(m,n);
		magic(m,n);
		for(LL i=m;i<=n;i++)
			if(isMagic[i-m]==true)
				ans++;
		cout<<ans<<endl;
	}
	return 0;
}
