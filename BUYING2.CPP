#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		int total=0,sweets=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			total+=a[i];
		}
		sweets=total/x;
		int flag=0;
		for(int i=0;i<n;i++)
		{
			if(total%x >=a[i])
				flag=1;
		}
		if(flag==1)
			cout<<"-1\n";
		else
			cout<<sweets<<endl;
	}
	return 0;
}

