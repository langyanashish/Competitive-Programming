#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int ans=0;
		while(n>0)
		{
			int r=n%10;
			if(r==4)
				ans++;
			n/=10;
		}
		cout<<ans<<endl;
	}
	return 0;
}

