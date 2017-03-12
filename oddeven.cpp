#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	int x;
	int odd=0,even=0;
	while(t--)
	{
		cin>>x;
		if(x%2 == 0)
			even++;
		else
			odd++;
	}
	cout<<abs(odd-even);
	return 0;
}

