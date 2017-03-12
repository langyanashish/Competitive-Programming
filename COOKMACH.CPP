#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	long long int t,c;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		c=0;
		while(a!=b)
		{
			if(a==b)
			{
				cout<<"0\n";
				break;
			}
			if(a%2 == 1 && a!=1)
			{
				c++;
				a=(a-1)/2;
			}
			else if(b%a == 0)
			{
				c++;
				a=a*2;
			}
			else
			{
				c++;
				a/=2;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}

