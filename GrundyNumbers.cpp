#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int n,q,l,r;
	cin>>n>>q;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	while(q--)
	{
		int x=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
			x=x^a[i];
		if(x==0)
			cout<<"Hacker\n";
		else
			cout<<"Mishki\n";
	}
	return 0;
}
