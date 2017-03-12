#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x;
	cin>>n>>x;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int b[n+1];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=-x;j<=x;j++)
		{
			if(a[i]==b[i+j])
			{
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
