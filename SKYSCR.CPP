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
		LL N,M;
		cin>>N>>M;
		if(N == M)
			cout<<"0\n";
		else
			{
				LL s=N+M;
				LL x=min(N , M);
				x*=2;
				cout<<(s-x)<<endl;
			}
	}
	return 0;
}

