#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,x,y;
		cin>>m>>x>>y;
		int a[m];
		int b[100];
		for(int i=0;i<100;i++)
			b[i]=0;
		for(int i=0;i<m;i++)
			cin>>a[i];
		//sort(a,a+m);
		x=x*y;
		for(int i=0;i<m;i++)
		{
			int p,q;
			if(a[i]-x-1>=0)
				p=a[i]-x-1;
			else
				p=0; 
			if(a[i]+x-1<100)
				q=a[i]+x-1;
			else
				q=99;			
			for(int j=p;j<=q;j++)
				b[j]=1;
		}
		int ans=0;
		for(int i=0;i<100;i++)
		{
			if(b[i]==0)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

