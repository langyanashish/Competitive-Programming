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
	int n,m;
	cin>>n>>m;
	int a[n+1];
	LOOP(i,n)	cin>>a[i];
	int l,r,x=1;
	int b[n+1];
	LOOP(i,m)
	{
		cin>>l>>r;
		for(int j=l-1;j<=r-1;j++)
			b[j]=x;
		x++;
	}
	int d,ans=0,count=0;
	bool flag=false;
	cin>>d;
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=(i-d) ; j <= i+d ; j++)
		{
			if(j<0)
				continue;
			if(j>=n)
				break;
			if(a[j]>a[i] && b[i]!=b[j])
			{
				ans=max(ans,a[j]);
				flag=true;
			}
		}
		for(int j=(i-d) ; j <= i+d ; j++)
		{
			if(j<0)
				continue;
			if(j>=n)
				break;
			if(a[j]==ans && b[i]!=b[j])
				count++;
		}
		if(flag==false)
			cout<<"-1\n";
		else
			cout<<ans<<" "<<count<<endl;
		flag=false;
		ans=0;
	}
	return 0;
}

