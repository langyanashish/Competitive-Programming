#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int solve(int n)
{
	int r=0;
	while(n)
	{
		r+=n&1;
		n/=2;
	}
	return r;
}
int main()
{
	int n;
	cin>>n;
	cout<<solve(n);
	return 0;
}

