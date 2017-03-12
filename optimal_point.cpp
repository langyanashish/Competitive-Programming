/*	Educational Codeforces Round 16	*/
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
	int n;
	cin>>n;
	int a[n];
	LOOP(i,n)
		cin>>a[i];
	sort(a,a+n);
	cout<<a[(n-1)/2];
	return 0;
}

