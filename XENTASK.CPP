#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int xenny[n],yana[n];
		LOOP(i,n)
			scanf("%d",&xenny[i]);
		LOOP(i,n)
			scanf("%d",&yana[i]);
		int t1=0,t2=0;
		LOOP(i,n)
		{
			if(i&1)
			{
				t1+=yana[i];
				t2+=xenny[i];
			}
			else
			{
				t1+=xenny[i];
				t2+=yana[i];
			}
		}
		int ans = min(t1,t2);
		printf("%d\n",ans);
	}
	return 0;
}

