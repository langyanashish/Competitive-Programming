#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
bool isPrime[1000001];
void sieve(int N) 
{
    for(int i = 0; i <= N;++i) 
        isPrime[i] = false;
    for(int i=2;i*i<N;i++)
    	isPrime[i*i]=true;
    for(int i=4;i<N;i++)
    {
    	if(isPrime[i] == true)
    	{
    		for(int j=2; i*j < N;j++)
    			isPrime[i*j]=true;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	sieve(1000005);
	while(t--)
	{
		LL n;
		cin>>n;
		LL ans=0;
		vector<int> v;
		for(int i=1;i<=n;i++)
		{
			if(isPrime[i] == true)
			{
				ans++;
				v.PB(i);
			}
		}
		cout<<(2*ans)<<endl;
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}

