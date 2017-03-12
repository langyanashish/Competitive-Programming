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
		int n,m;
		cin>>n>>m;
		int x,y,z;
		pair<int,int> a[n+1];
		LOOP(i,n)
		{
			cin>>a[i].first; //time
			cin>>a[i].second; //job value
		}
		int b[m+1],ans[m+1];
		LOOP(i,m)
		{
			cin>>b[i];
			ans[i]=0;
		}
		sort(a,a+n);
		int sum=0;
		/*LOOP(i,n)
			cout<<a[i].first<<" "<<a[i].second<<endl;*/
		LOOP(i,m)
		{
			x=b[i];
			sum=0;
			for(int j=n-1;j>=0;j--)
			{
				if(b[i]==0)
					break;
				if(a[j].first<=x)
				{
					y=a[j].first;
					z=a[j].second;
					for(int k=j-1;k>=0 && a[k].first==y;k--)
					{
						if(a[k].second>a[j].second)
							z=a[k].second;
					}
					sum+=z;
					x-=y;
				}
				if(x==0)
				{
					x=b[i];
					ans[i]=max(ans[i],sum);
					sum=0;
				}
			}
		}
		LOOP(i,m)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}

