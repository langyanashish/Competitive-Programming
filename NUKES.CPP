#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,n,k;
	cin>>a>>n>>k;
	int s[k]={0};
	for(int i=0; i<k && a>0;i++)
	{
		s[i]=a%(n+1);
		a/=(n+1);
	}
	for(int i=0;i<k;i++)
	{
		cout<<s[i]<<" ";
	}
	return 0;
}

