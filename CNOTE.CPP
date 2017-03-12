#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n;
		cin>>x>>y>>k>>n;
		int a[n][2];
		int flag=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i][0];
			cin>>a[i][1];
			if(a[i][0]>=(x-y) && a[i][1]<=k)
				flag=1;
		}
		if(flag==1)
			cout<<"LuckyChef\n";
		else
			cout<<"UnluckyChef\n";
	}
	return 0;
}

