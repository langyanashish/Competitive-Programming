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
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==0 || b==0 || c==0 || d==0)
			cout<<"Yes\n";
		else if(a+b==0 || a+c==0|| a+d==0 || b+c==0 || b+d==0 || c+d==0)
			cout<<"Yes\n";
		else if(a+b+c==0 || a+b+d==0 || b+c+d==0 || a+c+d==0 || a+b+c+d==0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

