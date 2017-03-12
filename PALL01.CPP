#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r,s=0;
		cin>>n;
		for(int i=n;i>0;i/=10)
		{
			r=i%10;
			s=s*10+r;
		}
		if(s==n)
			cout<<"wins\n";
		else
			cout<<"losses\n";
	}
	return 0;
}

