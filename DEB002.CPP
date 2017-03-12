#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c,k;
		cin>>a>>b>>c>>k;
		c-=k;
		long long d=(b*b)-(4*a*c);
		cout<<d<<endl;
		int x1=(-b+sqrt(d))/(2*a);
		int x2=(-b-sqrt(d))/(2*a);
		cout<<x1<<endl<<x2<<endl;
		int ans=min(x1,x2);
		cout<<ans<<endl;
	}
	return 0;
}

