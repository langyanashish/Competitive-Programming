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
	int hash[11]={0};
	int a[11];
	LOOP(i,10)
		cin>>a[i];
	int N,K;
	cin>>N>>K;
	int b[N+1];
	int c[N+1];
	LOOP(i,N)
	{
		cin>>b[i];
		hash[b[i]]++;
	}
	int pos=0;
	for(int i=0;i<10;i++)
	{
		while(hash[a[i]]>0)
		{
			c[pos]=a[i];
			pos++;
			hash[a[i]]--;
		}
	}
	cout<<c[K-1];
	return 0;
}

