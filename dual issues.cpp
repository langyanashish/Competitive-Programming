/*	August Circuits	*/
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
bool isp(int x)
{
	if(x<=1) return false;
	if(x<=3) return true;
	if(x%2==0||x%3==0) return false;
	for(int i=5;i*i<=x;i+=6)
		if(x%i==0||x%(i+2)==0) 
			return false;
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		LOOP(i,n)	cin>>a[i];
		sort(a,a+n);
		bool flag=false;
		for(int i=n-1;i>=0;i--)
		{
			if(isp(a[i]))
			{
				flag=true;
				cout<<a[i]*a[i]<<endl;
				break;
			}
		}
		if(flag==false)
			cout<<"-1\n";
	}
	return 0;
}

