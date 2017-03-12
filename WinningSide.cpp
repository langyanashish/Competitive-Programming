#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		char c[n];
		cin>>c;
		LL boy=0,girl=0;
		LOOP(i,n)
		{
			cin>>a[i];
			if(c[i] == 'b')
				boy+=a[i];
			else
				girl+=a[i];
		}
		if(boy > girl)
			cout<<"b "<<(boy - girl);
		else
			cout<<"g "<<(girl - boy);
		cout<<"\n";
	}
	return 0;
}

