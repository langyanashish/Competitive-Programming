#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mod	1000000007
int sum(int num)
{
	return (num*(num+1))/2;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans=0;
		if(n==1)
			cout<<"1\n";
		else{
		for(int i=1;sum(i)<=n;i++)
		{
			if(sum(i)<=n)
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	}
	return 0;
}

