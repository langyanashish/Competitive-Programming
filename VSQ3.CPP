#include<bits/stdc++.h>
using namespace std;
#define LL      long long
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
		LL n,q1,q2,q3,q4;
		cin>>n>>q1>>q2>>q3>>q4;
		int a[n+1];
		bool flag=0;
		LOOP(i,n)
		{
			cin>>a[i];
			if(a[i]>0)
				flag=1;
			if(a[i]==q1 || a[i]==q2 || a[i]==q3 || a[i]==q4)
				a[i]=0;
		}
		LL sum=0;
		if(flag == 0)
		{
			sort(a,a+n);
			sum=a[n-1];
		}
		else
		LOOP(i,n)
		{
			sum+=a[i];	
		}
		cout<<sum<<endl;
	}
	return 0;
}

