#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int hash[110]={0};
void reset()
{
	hash[0]=0;
	hash[1]=2;
	for(int i=2;i<110;i++)
	{
		hash[i]=1;
		for(int j=1;j<16;j++)
		{
			if(i % (7*j) == 0 || i % ( (7 * j) + 1) == 0)
			{
				hash[i]=2;
				break;
			}
		}
	}
}
int main()
{
	reset();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(hash[n]==1)
			cout<<"First\n";
		else if(hash[n]==2)
			cout<<"Second\n";
	}
	return 0;
}

