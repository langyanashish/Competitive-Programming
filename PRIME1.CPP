#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
void sieve(int N) 
{
    bool isPrime[N+1];
    for(int i = 0; i <= N;++i) 
	{
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) 
	{
         if(isPrime[i] == true) 
		 {
             // Mark all the multiples of i as composite numbers
             for(int j = i * i; j <= N ;j += i)
                 isPrime[j] = false;
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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		for(int i=m;i<=n;i++)
			if(isp(i))
				cout<<i<<endl;
		cout<<endl;
	}
	return 0;
}

