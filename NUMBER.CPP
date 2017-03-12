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
	LL N,K;
	cin>>N>>K;
	LL a[N];
	LOOP(i,N-1)
		cin>>a[i];
	sort(a,a+(N-1));
	bool flag=false;
	if(a[0] != K)
	{
		flag=true;
		cout<<(a[0]-1);
	}
	else
	for(int i=0;i<N-2;i++)
	{
		if(a[i]+1 != a[i+1])
		{
			flag=true;
			cout<<a[i]+1;
			break;
		}
	}
	if(flag==false)
		cout<<a[N-2]+1;
	return 0;
}

