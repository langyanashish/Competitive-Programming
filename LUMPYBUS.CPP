/* July 2016 Lunchtime*/
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL n,p,q;
		cin>>n>>p>>q;
		int a[n];
		LOOP(i,n)	cin>>a[i];
		sort(a,a+n);
		LL ans=0;
		int temp;
		LOOP(i,n)
		{
			if(p==0 && q==0)
				break;
			if(a[i] & 1)
			{
				if(a[i]==1)
				{
					if(p>0)
					{
						p--;
						ans++;
					}
				}
				else if(a[i]>1)
				{
					temp=a[i]/2;
					if(q>=temp && p>0)
					{
						q-=temp;
						p--;
						ans++;
					}
					else if(q>0 && q<temp)
					{
						a[i]-=q*2;
						q=0;
						if(p>=a[i])
						{
							p-=a[i];
							ans++;
						}
					}
					else if(p>=a[i])
					{
						p-=a[i];
						ans++;
					}
				}	
			}
			else
			{
				temp=a[i]/2;
				if(q>=temp)
				{
					q-=temp;
					ans++;
				}
				else if(q>0 && q<temp)
					{
						a[i]-=q*2;
						q=0;
						if(p>=a[i])
						{
							p-=a[i];
							ans++;
						}
					}
				else if(p>=a[i])
				{
					p-=a[i];
					ans++;
				}
			}
			if(p==0 && q==0)
				break;
		}
		cout<<ans<<endl;
	}
	return 0;
}
