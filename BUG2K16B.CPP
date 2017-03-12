#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
int hash[55]={0};
void reset()
{
	for(int i=0;i<51;i++)
		hash[i]=0;
}
int main()
{
	LL t;
	cin>>t;
	while(t--)
	{
		reset();
		LL n;
		cin>>n;
		LL a[n+2];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			hash[a[i]]++;
		}
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++)
		{
			if(hash[a[i]] > 0)
			{
				cout<<a[i]<<": "<<hash[a[i]]<<endl;
				hash[a[i]]=0;
			}
		}
	}
	return 0;
}
