#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define mod 1000000007
long long int power(long long int a,long long int n)
{
	if(n==0)
		return 1;
	if(n % 2 == 1)
		return (power(a, n/2) %mod * power(a, n/2) %mod * a % mod) % mod;
	else
		return (power(a, n/2) % mod *power(a, n/2) %mod) % mod; 
}
/*
long long int power(long long int a,long long int n)
{
	if(n == 0)
	{
		return 1;
	}
	if(n == 1)
	{
		return a;
	}
	long long int ans = (power(a, n / 2) % MOD + MOD) % MOD;
	
	if(n & 1)
	{
		return (ans * ans * a ) % MOD;
	}
	else
		return (ans * ans) % MOD; 
}
*/

/*long long power(long long base,long long exp)
{
	long long res=1;
	for(int i=0;i<exp/2;i++)
	{
		res=((res*base)%MOD+MOD)%MOD;
	}
	if(exp%2==0)
		res=((res*res)%MOD+MOD)%MOD;
	else
		res=((res*res*base)%MOD+MOD)%MOD;
	return res;
}*/

/*int power(long long base, long long exp)
{
    long long int result = 1;
    while (exp)
    {
        if (exp & 1)
            result = (result*base)%MOD;
        exp >>= 1;
        base =(base* base)%MOD;
    }

    return result%MOD;
}*/
/*int power(long long base, long long exp)
{
    long long int res = 1;
    while (exp>0)
    {
        if(exp%2==1) res=((res*base)%MOD+MOD)%MOD;
        base=((base*base)%MOD+MOD)%MOD;
        exp/=2;
    }
    return res;
}*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		cout << (k % MOD * power(k-1,n-1)%MOD)%MOD<<"\n";
	}
	return 0;
}

