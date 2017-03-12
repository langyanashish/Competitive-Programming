#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int main()
{
	long long n,w,l;
	cin>>n>>w>>l;
	long long int months;
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
			cin>>a[i][j];
	}
	long long total=0;
	for(months=1;;months++)
	{
		total=0;
		for(int i=0;i<n;i++)
			a[i][0]+=a[i][1];
		for(int i=0;i<n;i++)
		{
			if(a[i][0]>=l)
			{
				total+=a[i][0];
			}
		}
		if(total>=w)
			break;
	}
	cout<<months<<endl;
	return 0;
}

