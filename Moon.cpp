#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	bool f=0;
	LOOP(i,n)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
		if(abs(a[i]-a[i-1])>1 || abs(a[i]-a[i-1])==0)
		{
			f=1;
			break;
		}
	if(n == 1 && a[0]>0)
		f=1;
	if(f == 1)
		cout<<"-1\n";
	else if(n==1 && a[0]==0)
		cout<<"UP\n";
	else if(a[n-1] > a[n-2])
	{
		if(a[n-1] < 15)
			cout<<"UP\n";
		else
			cout<<"DOWN\n";
	}
	else
	{
		if(a[n-1] == 0)
			cout<<"UP\n";
		else
			cout<<"DOWN\n";
	}
	return 0;
}
//langyanashish

