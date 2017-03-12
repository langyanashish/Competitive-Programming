#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
int a[100010];
int b[100010];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	b[n]=a[n];
	for(int i=n-1;i>0;i--)
		b[i]=a[i]+a[i+1];
	for(int i=1;i<=n;i++)
		cout<<b[i]<<" ";
	return 0;
}

