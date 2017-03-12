#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
LL dp[1000005];
LL pos=0;
long long power(long long a,long long n)
{
	if(n==0)
		return 1;
	if(n % 2 == 1)
		return (power(a, n/2) * power(a, n/2) * a );
	else
		return (power(a, n/2) * power(a, n/2) ); 
}
void save()
{
	for(int i=0;i<1000005;i++)
	{
		LL temp=power(3,i);
		if(temp <= 10000000)
			dp[i]=temp;
		else
			break;
		pos++;
	}
}
bool isSubsetSum(LL set[], LL n, LL sum)
{
    bool subset[sum+1][n+1];
    for (LL i = 0; i <= n; i++)
      subset[0][i] = true;
    for (LL i = 1; i <= sum; i++)
      subset[i][0] = false;
     for (LL i = 1; i <= sum; i++)
     {
       for (LL j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] ||  subset[i - set[j-1]][j-1];
       }
     }
    return subset[sum][n];
}
int main()
{
	LL n;
	cin>>n;
	bool flag;
	LL ans=0,x;
	save();
	for(LL i=0;i <= pos ; i++)
	{
		x=dp[i];
		if(x>n)
		{
			x-=n;
			flag=isSubsetSum(dp,i+1,x);
			if(flag == true)
			{
				ans=dp[i];
				break;
			}
		}
	}
	cout<<ans<<" "<<x;;
	return 0;
}

