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
	int a[n+1];
	int odd=0,even=0;
	LOOP(i,n)
	{
		cin>>a[i];
		if(a[i] & 1)
			odd++;
		else
			even++;
	}
	if(odd == even)
		cout<<"NO";
	else
		cout<<odd*2;
	return 0;
}

