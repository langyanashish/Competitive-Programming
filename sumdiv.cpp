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
	int Sum=0;
	for(int i=1;i<n;i++)
		if(n%i==0)
			Sum+=i;
	cout<<Sum<<endl;
	return 0;
}

