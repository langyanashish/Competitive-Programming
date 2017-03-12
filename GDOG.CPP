#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a > b ? a : b)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		int ans=0;
		for(int i=1;i<=k;i++)
			ans=max(ans,n%i);
		cout<<ans<<endl;
	}
	return 0;
}

