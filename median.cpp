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
		int m;
		cin>>m;
		int a[m];
		for(int i=0;i<m;i++)
			cin>>a[i];
		sort(a,a+m);
		if(m & 1)
			cout<<a[m/2]<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}

