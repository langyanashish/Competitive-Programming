#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min=INT_MAX;
		for(int i=0;i<n;i++)
		{
			if(a[i]<min && a[i]>0)
				min=a[i];
		}	
		for(int i=0;i<n;i++)
		{
			if(a[i]%min==0)
				flag=1;
			else
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			for(int i=0;i<n;i++)
				a[i]/=min;
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

