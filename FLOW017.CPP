#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,max,smax;
		cin>>a>>b>>c;
		max=a > b ? (a > c ? a : c) : (b > c ? b : c) ;
		if(max==a)
		{
			if(b>c)	smax=b;
			else	smax=c;
		}
		else if(max==b)
		{
			if(a>c)	smax=a;
			else	smax=c;
		}
		else
		{
			if(a>b)	smax=a;
			else	smax=b;
		}
		cout<<smax<<endl;
	}
	return 0;
}
