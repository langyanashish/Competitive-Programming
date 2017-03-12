#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
bool hash[20]={0};
void reset()
{
	LOOP(i,20)
		hash[i]=false;
}
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		reset();
		int l,r,k;
		cin>>l>>r>>k;
		int ans=0,rem,temp,d=0;
		for(int i=l;i<=r;i++)
		{
			reset();
			d=0;
			temp=i;
			while(temp > 0)
			{
				rem=temp%10;
				hash[rem]=true;
				temp/=10;
			}
			temp=i;
			for(int z=1;z<20;z++)
			{
				if(hash[z]==true)
				{
					if(temp%z==0)
						d++;
				}
			}
			if(d>=k)
				ans++;
		}	
		cout<<ans<<endl;
	}
	return 0;
}

