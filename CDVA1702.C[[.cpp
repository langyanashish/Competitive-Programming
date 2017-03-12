#include<bits/stdc++.h>
using namespace std;
#define LL      long long int
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
bool isp(LL x)
{
	if(x<=1) return false;
	if(x<=3) return true;
	if(x%2==0||x%3==0) return false;
	for(LL i=5;i*i<=x;i+=6)
		if(x%i==0||x%(i+2)==0) 
			return false;
	return true;
}
long long int power(long long int a,long long int n)
{
	if(n==0)
		return 1;
	if(n % 2 == 1)
		return (power(a, n/2) * power(a, n/2) * a );
	else
		return (power(a, n/2)  *power(a, n/2) ) ; 
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		LL n;
		scanf("%lld",&n);
		LL count=1,ans=n+1;
		if(isp(n) == true)
		{
			printf("%lld\n%lld\n",count,ans);
			continue;
		}
		LL s=sqrt(n);
		for(LL i=2;i<=s;i++)
		{
			LL j=2;
			while(power(i,j) <= n)
			{
				if(power(i,j) == n)
				{
					count++;
					ans+=i+j;
					break;
				}
				j++;
			}
		}
		printf("%lld\n%lld\n",count,ans);
	}
	return 0;
}
