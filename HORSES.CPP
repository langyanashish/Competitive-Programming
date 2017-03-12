#include<bits/stdc++.h>
using namespace std;
#define max(a,b)	(a>b?a:b)
#define min(a,b)	(a<b?a:b)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[5000];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int d=INT_MAX;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				d=min(d,max(a[i],a[j])-min(a[i],a[j]));
			}
		}
		cout<<d<<endl;
	}
	return 0;
}

