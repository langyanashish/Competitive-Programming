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
	int t;
	cin>>t;
	LD p,s,edge,height,vol;
	while(t--)
	{
		cin>>p>>s;
		edge= ( p -sqrt( (p*p) - (24*s)))/12;
		height=(p/4)-(2*edge);
		vol=edge*edge*height;
		cout<<setprecision(2);
		cout<<fixed;
		cout<<vol;
		cout<<endl;
	}
	return 0;
}

