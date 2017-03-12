#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int hash[30]={0};
void reset()
{
	LOOP(i,10)
		hash[i]=0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		int n,m;
		cin>>n>>m;
		int u,v;
		int ans=0;
		bool f=0;
		LOOP(i,m)
		{
			cin>>u>>v;
			hash[v]++;
			hash[u]++;
		}
		if(m==0)
			ans=n;
		else if(n==1)
			ans=1;
		else if(n==2)
			ans=1;
		else if(n==3)
		{
			switch(m)
			{
				case 1:
					ans=2;
					break;
				case 2:
				case 3:
					ans=1;
					break;
			}
		}
		else
		{
			switch(m)
			{
				case 1:
					ans=3;
					break;
				case 2:
					ans=2;
					break;
				case 3:
				case 4:
				case 5:
				case 6:
						for(int i=1;i<=n;i++)
							if(hash[i]>=3)
							{
								f=1;
								break;
							}
						if(f==1)
							ans=1;
						else
							ans=2;
						break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

