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
	while(t--)
	{
		int n;
		cin>>n;
		char s[n];
		cin>>s;
		int a[n+1];
		LL sum=0;
		int left=0;
		int left1=0;
		int temp1=0,temp2=0;
		LOOP(i,n)
			cin>>a[i];
		left=0;
		LL ans=0;
		int pos=0;
		if(s[0]=='0')
		{
			for(int i=1;i<n;i++)
			{
				if(s[i]=='1')
				{
					ans+=a[i]-a[0];
					pos=i;
					left=i;
					break;
				}
			}
		}
		else
			pos=0,ans=0;
		for(int i=pos+1;i<n;i++)
		{
			temp1=0;
			temp2=0;
			if(s[i]=='0' && i==n-1)
			{
				ans+=a[i]-a[left];
				break;
			}
			if(s[i]=='1')
				left=i;
			else if(s[i]=='0')
			{
				left1=i;
				for(int j=i+1;j<n;j++)
				{
					if(s[j]=='1')
					{
						temp1=a[j-1]-a[left];
						temp2=a[j]-a[left1];
						ans+=min(temp1,temp2);
						left=j;
						i=j;
						break;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

