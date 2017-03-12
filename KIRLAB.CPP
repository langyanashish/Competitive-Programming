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
		int n;
		cin>>n;
		int a[n+1];
		LOOP(i,n)
			cin>>a[i];
		int ans=0,j,k,c=0;
		bool flag=false,f=false;
		for(int i=0;i<n;i++)
		{
			ans=1;
			for(j=0;j<n;)
			{
				flag=false;
				for(k=j+1;k<n;k++)
				{
					if(__gcd(a[j],a[k]) > 1)
					{
						ans++;
						j=k;
						flag=true;
						f=true;
						break;
					}
				}
				if(k==n && f==true)
					break;
				if(flag == false)
					j++;
			}
			c=max(c,ans);
		}
		cout<<c<<endl;
	}
	return 0;
}

