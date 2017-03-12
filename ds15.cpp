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
		int n;
		cin>>n;
		int div=0;
		for(int i=1;i<n/2+1;i++)
			if(n%i==0)
				div+=i;
		cout<<div<<endl;
	}
	return 0;
}

