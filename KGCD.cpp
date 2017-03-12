#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
long long kgcd(long long a, long long b)
{
    while (a > 0 && b > 0)
    {
        a -= b;
        swap(a , b);
    }
    return a + b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		LL x;
		LL count=n;
		for(LL i=2;i<=n;i++)
		{
			count=0;
			for(LL j=1;j<=n;j++)
			{
				x=kgcd(i,j);
				cout<<x<<" "<<i<<" "<<j<<endl;;
				if(x == __gcd(i,j))	
				{
					cout<<" yes\n";
					count++;
				}
			}
			cout<<count<<endl;
		}	
		cout<<count<<endl;
	}
	return 0;
}

