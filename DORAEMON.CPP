#include<bits/stdc++.h>
using namespace std;
# define MOD	104395301
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],c[n],d[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<n;i++)	cin>>b[i];
		for(int i=0;i<n;i++)
		{
			c[i]=a[i];
			d[i]=b[i];
		}
		sort(c,c+n);
		sort(d,d+n);
		int flag=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(c[i]==a[j])
				{
					if(b[j]!=d[n-i-1])
						flag=1;
				}
			}
		}
		if(flag==0)	cout<<"YES\n";
		else	cout<<"NO\n";
	}
	return 0;
}

