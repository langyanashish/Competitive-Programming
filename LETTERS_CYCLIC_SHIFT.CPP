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
	string a;
	cin>>a;
	int l=a.length();
	int i=0;
	while(i<l && a[i]=='a')
		i++;
	if(i==l)
		a[i-1]='z';
	while(i<l && a[i]!='a')
		--a[i++];
	cout<<a;
	return 0;
}
