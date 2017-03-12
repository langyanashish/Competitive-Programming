#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int hash[1000010]={0};
void reset()
{
	hash[0]=0;
	for(LL i=1;i<1000010;i++)
	{
		if(i & 1)
			hash[i]=1;
		else
			hash[i]=2;
	}
}
int main()
{
	reset();
	LL t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		if(hash[n]==1)
			cout<<"JENNY\n";
		else if(hash[n]==2)
			cout<<"JACK\n";
	}
	return 0;
}

