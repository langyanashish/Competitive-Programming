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
		int n;
		cin>>n;
		int m,f;
		cin>>m>>f;
		int x=0,y=0,temp;
		int a[n];
		LOOP(i,n)
			cin>>a[i];
		sort(a,a+n);
		LOOP(i,n)
		{
			if(a[i]%m==0 && a[i]>0)
			{
				temp=a[i]/m;
				if(temp>0)
				{
					x++;
					a[i]=-1;
				}
			}
		}
		LOOP(i,n)
		{
			if(a[i]%f==0 && a[i]>0)
			{
				temp=a[i]/f;
				if(temp>0)
				{
					y++;
					a[i]=-1;
				}
			}
		}
		int ans=x+y;
		float p=(ans*100)/n;
		if(p>=70)
		{
			cout<<"Yes\n";
			if(x==y)
				cout<<"Both\n";
			else if(x>y)
				cout<<"Multan\n";
			else
				cout<<"Fultan\n";
		}
		else
			cout<<"No\n";
	}
	return 0;
}

