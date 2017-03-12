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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int f;
		cin>>f;
		int b[f];
		for(int i=0;i<f;i++)
			cin>>b[i];
		int c=0;
		int d[f]={0};
		for(int i=0;i<f;i++)
		{
			for(int j=0;j<n;j++)
				if(a[j] == b[i])
				{
					d[i]=1;
				}
		}
		int flag=0;
		for(int i=0;i<f;i++)
			if(d[i]==1)	flag=1;
			else		flag=0;
		if(flag==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

