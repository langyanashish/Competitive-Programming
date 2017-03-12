#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
int a[1000005];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		LL b[n+1];
		int minim=INT_MAX;
		LOOP(i,n)
		{
			cin>>a[i];
			minim=min(minim,a[i]);
		}
		LL pos=0,ans=0;
		bool flag=false;
		for(int i=1;i<n;i++)
			b[pos++]=abs(a[i]-a[i-1]);
		map<int,int>m;
		m.clear();
		int count=0;
		int maxim=INT_MIN;
		for(int i=0;i<pos;i++)
		{
			if(m[b[i]]==0)
			{
				count++;
				m[b[i]]++;
			}
		}
		if(count==1)
			cout<<minim<<endl;
		else if(count > 2)
			cout<<"-1\n";
		else
		{
			int d=b[0],f=b[pos-1];
			for(int i=1;i<=n;i++)
			{
				if(b[i]==d && b[i]==f)
					continue;
				if(b[i] != d)
					if(b[i] == f)
						ans=1;
					else
						ans=i+1;
				else if(b[i] == d)
					if(b[i]!=f)
						ans=pos-2;
					else
						ans=i+1;
				break;
			}
			cout<<a[ans]<<endl;
		}
	}
	return 0;
}

