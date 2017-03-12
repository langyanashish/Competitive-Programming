#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int product=1,num;
		for(int i=0;i<n;i++)
		{
			cin>>num;
			product=(product%mod * (num%mod))%mod;
		}
		cout<<product%mod<<endl;
	}
	return 0;
}

