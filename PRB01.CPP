#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int flag=0;
		for(int i=2;i<n/2;i++)
		{
			if(n%i==0)
				flag=1;
		}
		if(flag==1)
			cout<<"no\n";
		else
			cout<<"yes\n";
	}
	return 0;
}

