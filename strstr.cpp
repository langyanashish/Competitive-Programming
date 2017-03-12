#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	char a[1000],b[1000];
	cin>>a>>b;
	if(strstr(a,b))
		cout<<"1\n";
	else
		cout<<"0\n";
	}
	return 0;
}

