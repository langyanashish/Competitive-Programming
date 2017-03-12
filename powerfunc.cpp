#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
long long int power(long long int a,long long int n)
{
	if(n==0)
		return 1;
	if(n % 2 == 1)
		return (power(a, n/2) %mod * power(a, n/2) %mod * a % mod) % mod;
	else
		return (power(a, n/2) % mod *power(a, n/2) %mod) % mod; 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL base,expo;
		cin>>base>>expo;
		cout<<power(base,expo)<<endl;
	}
	return 0;
}

