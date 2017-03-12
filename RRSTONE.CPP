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
	int n,k;
	cin>>n>>k;
	long long int a[n+1];
	LOOP(i,n)
		cin>>a[i];
	LL m;
	if(k & 1)
		k=1;
	else
		k=min(k,2);
	for(int i=0;i<k;i++)
	{
		m=a[i];
		for(int j=1;j<n;j++)
			m=max(m,a[j]);
		for(int j=0;j<n;j++)
			a[j]=m-a[j];
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}

