#include<bits/stdc++.h>
using namespace std;
#define LL      long long
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
		LL n;
		cin>>n;
		int a[n+1],b[n+1];
		LOOP(i,n)
			cin>>a[i];
		LOOP(i,n)
			cin>>b[i];
		for(int i=n-1;i>0;i--)
		{
			a[i]=a[i]-a[i-1];
		}
		LL count=0;
		LOOP(i,n)
		{
			//cout<<a[i]<<" ";
			if(b[i]<=a[i])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}

