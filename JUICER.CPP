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
	int n,b,d;
	cin>>n>>b>>d;
	int a[n];
	LOOP(i,n)
		cin>>a[i];
	int ans=0;
	int waste=0,temp;
	LOOP(i,n)
	{
		if(a[i]<=b)
		{
			temp=waste+a[i];
			if(temp<=d)
				waste=temp;
			else if(temp>d) 
			{
				waste=0;
				ans++;
			}
		}
	}
	if(waste>d)
		ans++;
	cout<<ans;
	return 0;
}
