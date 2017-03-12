/*	September Challenge 2016	*/
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int a[100010];
int LPM[1000001];
bool isPrime[1000001];
int v[1000001];
set<int> s1;
void sieve(int N) 
{
    for(int i = 0; i <= N;++i) 
        isPrime[i] = true;
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
int LeastPrimeDivisor(int n)
{
	int j;
	if(LPM[n]>0)
		return LPM[n];
	else if(n%2 == 0)
	{
		LPM[n]=2;
		return 2;
	}
	else if(isPrime[n] == true)
	{
		LPM[n]=n;
		return n;
	}
	else
	for(int i=0;i<=n;i++)
	{
		j=v[i];
			if(n%j == 0)
			{
				LPM[n]=j;
				return j;
			}
	}
	LPM[n]=1;
	return 1;
}
int get(int l,int r)
{
	int result=1;
	for(int i=l;i<=r;i++)
		result=max(result,LeastPrimeDivisor(a[i]));
	return result;
}
void update(int l,int r)
{
	for(int i=l;i<=r;i++)
	{
		a[i]=(a[i]/LeastPrimeDivisor(a[i]));
		if(a[i] == 1)
			s1.insert(i);
	}
}
void reset()
{
	LOOP(i,1000001)
	{
		LPM[i]=0;
		v[i]=0;
	}
}
int main()
{
	int t;
	cin>>t;
	reset();
	sieve(1000001);
	while(t--)
	{
		bool flag=false;
		int n,m;
		int ans;
		int mx=INT_MIN;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int l,r,type;
		LOOP(i,m)
		{
			cin>>type>>l>>r;
			if(type==0)
			{
				if(s1.size() != n)
					update(l , r);
			}
			if(type==1)
			{
				if(s1.size() == n)
					ans=1;
				else
					ans=get(l , r);
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}
