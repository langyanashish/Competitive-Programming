#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define mod 1000000007
long long int power(long long int a,long long int n)
{
	if(n==0)
		return 1;
	if(n & 1)
		return (power(a, n/2) %MOD * power(a, n/2) %MOD * a % MOD) % MOD;
	else
		return (power(a, n/2) % MOD *power(a, n/2) %MOD) % MOD; 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		long long int res = 2 * ((power(2, (n + 1) / 2) % mod + mod) % mod) - 2;
		if(n & 1)
		{	
			res = res % mod;
			cout << res << "\n";
		}
		else
		{
			res = (res + (power(2, (n / 2)) % mod + mod) % mod) % mod;
			cout << res << "\n";
		}
	}
	return 0;
}

