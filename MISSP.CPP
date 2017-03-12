#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,x,ans=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			ans=ans^x;
		}
		cout<<ans<<endl;		
	}
	return 0;
}

