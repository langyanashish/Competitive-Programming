/* July 2016 LOC */
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
LL loc(int a[],int n)
{
	int c1=n,c2=n,sum1=0,sum2;
	bool flag=false;
	int ans=0;
	LOOP(i,n)
	{
		sum1+=a[i];
		if(a[i]%2 == 0)
			flag=true;
	}
	sum2=sum1;
	if(sum1%2==0)
		ans=n;
	else
	{
		for(int i=n-1;i>0;i--)
		{
			sum1-=a[i];
			if(sum1%2==0)
			{
				c1=i;
				break;
			}
			else if(sum1%2==1 && i==1 )
			{
				if(flag==true)
				{
					c1=1;
					break;
				}
				else
				{
					c1=0;
					break;
				}
			}
		}
		for(int i=0;i<n-1;i++)
		{
			sum2-=a[i];
			if(sum2%2==0)
			{
				c2=n-i-1;
				break;
			}
			else if(sum2%2==1 && i==n-2 )
			{
				if(flag==true)
				{
					c2=1;
					break;
				}
				else
				{
					c2=0;
					break;
				}
			}
		}
		ans=max(c1,c2);
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		LOOP(i,n)
			cin>>a[i];
		LL ans=loc(a,n);
		cout<<ans<<endl;
	}
	return 0;
}

