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
		LL n;
		cin>>n;
		vector<int> v;
		for(int i=1;i<=n;i++)
			v.PB(i);
		int ans=0;
		bool flag=false;
		do
		{
			flg=false;
			for(int i=1;i<n-1;i++)
			{
				if(v[i]>v[i-1] && v[i]>v[i]+1)
				{
					flag=true;
					break;
				}
			}
			if(flag==true)
				ans++;
		}while();
	}
	return 0;
}

