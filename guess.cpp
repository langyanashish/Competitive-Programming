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
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		if(n*m & 1)
			cout<<m*n/2<<"/"<<m*n<<endl;
		else
			cout<<"1/2\n";
	}
	return 0;
}

