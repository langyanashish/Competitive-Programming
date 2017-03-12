#include<bits/stdc++.h>
using namespace std;
#define ll      long long
#define pb		push_back
#define for(i,n)  for(int i=0;i<n;i++)
#define mod		1000000007
int a[100010]={0};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll m=INT_MAX;
		for(i,n)
		{
			cin>>a[i];
			if(a[i]<m)
				m=a[i];
		}
		ll amt=0;
		for(i,n)
		{
			if(a[i]!=m)
			{
				amt+=a[i]*m;
			}
		}
		cout<<amt<<endl;
	}
	return 0;
}

