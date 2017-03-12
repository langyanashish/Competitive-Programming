#include<bits/stdc++.h>
using namespace std;
#define mod 26
int main()
{
	std::ios::sync_with_stdio(false);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,q;
		cin>>n>>q;
		char s[n];
		cin>>s;
		for(int i=0;i<q;i++)
		{
			long long int l,r,k;
			cin>>l>>r>>k;
			for(int j=l-1;j<=r-1;j++)
			{
				if(k>=0)
				{
					if(s[j]+k<=122)
						s[j]+=k;
					else
					{
						int temp=((s[j]+k)-122)%mod;
						s[j]=96+temp;
					}
				}
				else
				{
					if(s[j]+k>=97)
						s[j]+=k;
					else
					{
						int temp=(97-(s[j]+k))%mod;
						s[j]=123-temp;
					}
					
				}
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}
