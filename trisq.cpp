#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int solve(int b)
{
	if(b==1 || b==2 || b==3)
		return 0;
	return ((b/2 - 1) + solve(b-2));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int b;
		cin>>b;
		int ans=solve(b);
		cout<<ans<<endl;
	}
	return 0;
}

