#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		int a[n+1];
		int ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>=p)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

