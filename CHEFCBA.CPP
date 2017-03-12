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
	int a[5];
	LOOP(i,4)
		cin>>a[i];
	sort(a,a+4);
	int x=__gcd(a[0],a[1]);
	a[0]/=x;
	a[1]/=x;
	x=__gcd(a[2],a[3]);
	a[2]/=x;
	a[3]/=x;
	if(a[0]==a[2] && a[1]==a[3])
		cout<<"Possible\n";
	else
		cout<<"Impossible\n";
	return 0;
}

