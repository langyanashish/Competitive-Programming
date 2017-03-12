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
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		LOOP(i,n)
			cin>>a[i];
		sort(a,a+n);
		for(int i=n-1;i>0;i--)
		{
			if(a[i-1] == a[i])
				continue;
			if(a[i-1] < a[i])
			{
				a[i]=-1;
				if(i==1)
					a[0]=-1;
			}
		}
		int ans=1;
		for(int i=0;i<n;i++)
			if(a[i] > 0)
				ans++;
		cout<<ans<<endl;
	}
	return 0;
}

