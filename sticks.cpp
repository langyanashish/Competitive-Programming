#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int main()
{
	int n;
	cin>>n;
	int c=0;
	while(n)
	{
		c++;
		n=n & (n-1);		
	}
	cout<<c<<endl;
	return 0;
}

