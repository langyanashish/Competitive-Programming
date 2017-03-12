#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int t;
	cin>>t;
	while(t--)
	{
		long long int r,g,b;
		cin>>r>>g>>b;
		long long int a[3];
		a[0]=r;
		a[1]=g;
		a[2]=b;
		sort(a,a+3);
		long long int k;
		cin>>k;
		long long int min,mid,max;
		long long int ans;
		max=a[2];
		mid=a[1];
		min=a[0];
		//cout<<endl<<min<<mid<<max;
		if(k<=min)
		{
			ans=3*k-2;
		}
		else if(k>min && k<=mid)
		{
			ans=min+k+(k-1);
		}
		else if(k>mid && k<=max)
		{
			ans=min+mid+k;
		}
		cout<<ans<<endl;
	}
	return 0;
}

