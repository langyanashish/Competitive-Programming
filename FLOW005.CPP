#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		count+=n/100;
		n%=100;
		count+=n/50;
		n%=50;
		count+=n/10;
		n%=10;
		count+=n/5;
		n%=5;
		count+=n/2;
		n%=2;
		count+=n/1;
		cout<<count<<endl;
	}
	return 0;
}
