#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

char magic(char c)
{
	int x=(int)c;
	//cout<<x<<" ";
	int d=255;
	int p=67;
	int a[]={67,71,73,79,83,89,97,101, 103, 107, 109, 113};
	for(int i=0;i<12;i++)
	{
		if(abs(a[i]-x) < d)
		{
			d=(int)abs(a[i]-x);
			p=a[i];
		}
	}
	//cout<<p<<endl;
	return (char)p;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		cin>>a;
		char c;
		LOOP(i,n)
		{
			c = magic(a[i]);
			a[i]=c;
		}
		cout<<a<<endl;
	}
	return 0;
}

