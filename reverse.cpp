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
	int rev=0;
	int r=0;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	cout<<rev<<endl;
	return 0;
}

