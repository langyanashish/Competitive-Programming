#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,x;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>x;
		cout << ((n-1)*n)/2 << endl;	
	}
	return 0;
}
