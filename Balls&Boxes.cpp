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
	
		int N,Q;
		cin>>N>>Q;
		int white[N];
		int black[N];
		int x,y;
		black[0]=1;
		white[0]=0;
		for(int i=1;i<N;i++)
			black[i]=0,white[i]=1;
		LOOP(i,Q)
		{
			cin>>x>>y;
			if(black[x-1]>0 && white[x-1]==0)
			{
				black[x-1]--;
				black[y-1]++;
			}
			else if(black[x-1]>0 && white[x-1]>0)
			{
				black[y-1]++;
			}
			else if(black[x-1]==0)
			{
				if(white[x-1]>0)
				{
					white[x-1]--;
					white[y-1]++;
				}
			}
		}
		int ans=0;
		LOOP(i,N)
			if(black[i]>0)
				ans++;
		cout<<ans<<endl;
	return 0;
}
