#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int hash1[11],hash2[11];
void reset()
{
	LOOP(i,10)
	{
		hash1[i]=0;
		hash2[i]=0;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		LL a,b,r;
		cin>>a>>b;
		LL c=a*b;
		while(a>0)
		{
			r=a%10;
			hash1[r]++;
			a/=10;
		}
		while(c>0)
		{
			r=c%10;
			hash2[r]++;
			c/=10;
		}
		bool flag=0;
		LOOP(i,10)
		{
			if(hash1[i] != hash2[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

