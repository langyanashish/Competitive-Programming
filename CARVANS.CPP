#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int x=a[0];
		int cars=1;
		for(int i=1;i<n;i++)
		{
			if(x>=a[i])
			{
				cars++;
				x=a[i];
			}
		}
		cout<<cars<<endl;
	}
	return 0;
}

