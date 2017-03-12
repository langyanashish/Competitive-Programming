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
		return (power(a, n/2) * power(a, n/2) * a);
	else
		return (power(a, n/2) *power(a, n/2)); 
}
int main()
{
		LL n,k,m;
		cin>>n>>k>>m;
		LL sum=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				sum+=power(j,k)%m;
				sum=sum%m;
			}
		}
		cout<<sum<<endl;
	return 0;
}

