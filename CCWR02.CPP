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
	while(t--)
	{
		int k;
		double x;
		cin>>x>>k;
		float a[k],b[k];
		LOOP(i,k)
			cin>>a[i];
		LOOP(i,k)
			cin>>b[i];
		double temp=x;
		LOOP(i,k)
		{
			x=x+(x*(a[i]/b[i]));
			//cout<<x<<" ";
		}
		double r=x-temp;
		double per=(r/x)*100;
		cout<<(LL)per<<endl;
	}
	return 0;
}
