/* 		September Challenge 2016       	*/
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
		string a;
		cin>>a;
		int l=a.length();
		int zero=0,one=0;
		LOOP(i,l)
		{
			if(a[i]=='1')
				one++;
			if(a[i]=='0')
				zero++;
		}
		bool flag=false;
		if(one>zero)
		{
			if(one==1 && zero==0)
				flag=true;
			else if(zero==1)
				flag=true;	
		}
		else if(one==zero)
		{
			if(one==1)
				flag=true;			
		}
		else
		{
			if(zero==1 && one==0)
				flag=true;
			else if(one==1)
				flag=true;
		}
		if(flag==true)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

