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
		{
			cin>>a[i];
		}	
		int x=0,y=0;
		if(n==1)
			cout<<"YES\n";
		else
		{
			for(int i=0;i<n-1;i++)
			{
				if(a[i]>a[i+1])
					x++;
			}
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
					if(a[i] > a[j])
						y++;
			}
			if(x==y)	
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		
	}
	return 0;
}

