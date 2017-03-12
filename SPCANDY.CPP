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
		LL n,k;
		cin>>n>>k;
		if(k)
			cout<<n/k<<" "<<n%k<<endl;
		else
			cout<<"0 "<<n<<endl;
	}
	return 0;
}

