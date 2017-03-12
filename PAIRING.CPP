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
	int a[10000][2];
	int b[1000]={0};
	int ans[1000],pos;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		pos=0;
		LOOP(i,n)
			b[i]=0;
		for(int i=0;i<m;i++)
		{
			cin>>a[i][0];
			cin>>a[i][1];
		}
		for(int i=m-1;i>=0;i--)
		{
			if(b[a[i][0]]==0 && b[a[i][1]]==0)
			{
				b[a[i][0]]=b[a[i][1]]=1;
				ans[pos++]=i;
			}
		}
		for(int i=pos-1;i>=0;i--)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}

