#include<bits/stdc++.h>
using namespace std;
#define ll      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int gcd2(int a , char *b )
{
	int temp=0;
	for(int i=0; b[i]!='\0'; i++)
	{
		temp=temp*10+(b[i]-'0');
		temp=temp%a;
	}
	return temp;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,ans;
		char b[260];
		cin>>a>>b;
		if(a == 0)
			cout<<b<<endl;
		else
		{
			ans=gcd2(a,b);
			cout<<__gcd(ans,a)<<endl;
		}
	}
	return 0;
}

