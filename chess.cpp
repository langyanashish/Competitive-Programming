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
	char a[3];
	cin>>a;
	if(a[0]=='a' || a[0]=='h')
	{
		if(a[1]=='1' || a[1]=='8')
			cout<<"3\n";
		else
			cout<<"5\n";
	}
	else
	{
		if(a[1]=='1' || a[1]=='8')
			cout<<"5\n";
		else
			cout<<"8\n";
	}
	return 0;
}

