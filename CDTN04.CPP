#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
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
	int n,k;
	cin>>n>>k;
	LL deno=power(2,k);
	deno=power(deno,n-k+1);
	LL num=deno-1;
	for(int i=2;i<=min(num,deno);i++)
	{
		if(num%i==0 && deno%i==0)
		{
			num/=i;
			deno/=i;
		}
	}
	cout<<num<<"/"<<deno;
	return 0;
}

