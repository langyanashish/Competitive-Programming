#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a[n];
		int  b[n];
		for(int i=0;i<n;i++)	
		{
			cin>>a[i];
			b[i]=0;
		}
		if(a[0]=='1')
		{
			b[0]=1;
			b[1]=1;
		}
		for(int i=1;i<n-1;i++)
		{
			if(a[i]=='1')
			{
				b[i-1]=1;
				b[i]=1;
				b[i+1]=1;
			}
		}
		if(a[n-1]=='1')
		{
			b[n-2]=1;
			b[n-1]=1;
		}
		int ans=0;
		for(int i=0;i<n;i++)
			if(b[i]==0)
				ans++;
		cout<<ans<<endl;
	}
	return 0;
}

