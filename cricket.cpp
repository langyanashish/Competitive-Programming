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
		int n;
		cin>>n;
		int a[n];
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a[i]=x*3;
		}
		int max=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a[i]+=x;
			if(a[i]>max)
				max=a[i];
		}
		cout<<max<<endl;
	}
	return 0;
}

