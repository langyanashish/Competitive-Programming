#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int m,n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	int b[m+1];
	bool f=0;
	for(int i=0;i<m;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
	{
		f=0;
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j] && i==j)
			{
				cout<<i+1<<" ";
				break;
			}
		}
	}
	return 0;
}
