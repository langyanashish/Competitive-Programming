#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	LL n,p;
	cin>>n;
	int a[n+1];
	int total=0;
	LOOP(i,n)
	{
		cin>>a[i];
		total+=a[i];
	}
	LL tickets=0;
	total-=2*n;
	if(total<=0)
		tickets=n;
	else
		tickets=n+((total+1)/2);
	/*LL tickets=n,vouchers=0;
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
			vouchers++;
		else
		{
			if(vouchers>0)
			{
				if(a[i]-vouchers > 0)
				{
					a[i]-=vouchers;
					vouchers=0;
					i--;
				}
				else
				{
					vouchers-=a[i];
				}
			}
			else
			{
				p=0;
				a[i]-=2;
				tickets+=a[i]/2;
				p=a[i]/2;
				if(a[i] & 1)
				{
					tickets++;
					p++;
				}
				vouchers+=p;
			}
		}
	}*/
	cout<<tickets<<endl;
	return 0;
}
