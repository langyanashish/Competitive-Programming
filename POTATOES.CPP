#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,res=0,ans=0;
		cin>>x>>y;
		int z=x+y;
		for(int i=x+y+1;i<=10000;i++)
		{
			int res=prime(i);
			if(res==1)
			{
				ans=i;
				break;
			}
		}
		cout<<ans-x-y<<endl;
	}
	return 0;
}

