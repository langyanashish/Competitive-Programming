#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	sort(a,a+t);
	for(int i=0;i<t;i++)
		cout<<a[i]<<"\n";
	return 0;
}

