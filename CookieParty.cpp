/*	Week of Code 22	*/
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	int n,m,r;
	cin>>n>>m;
	//cout<<(int)5%8<<" "<<(int)8%5<<endl;
	if(n==m || m%n==0)
		cout<<"0";
	else
	{
		if(n>m)
			r=n-m;
		else
		{
			r=m%n;
			r=n-r;
		}
		cout<<r<<endl;
	}
	return 0;
}

