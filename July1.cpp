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
		int n;
		cin>>n;
		int a[n+1];
		float sum=0;
		bool f1=false,f2=false;
		LOOP(i,n)
		{
			cin>>a[i];
			if(a[i]<=2)
				f1=true;
			if(a[i]==5)
				f2=true;
			sum+=a[i];
		}
		float avg=(float)sum/n;
		if(f1==false && f2==true && avg>=4)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

