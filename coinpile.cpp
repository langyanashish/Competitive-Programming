#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int hash[100000]={0};
int main()
{
	int n;
	cin>>n;
	int m=0,x=INT_MAX;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		hash[a[i]]++;
		if(hash[a[i]]>=m)
		{
			m=hash[a[i]];
			x=min(a[i],x);
		}
	}
	cout<<x<<endl<<m<<endl;
	return 0;
}

