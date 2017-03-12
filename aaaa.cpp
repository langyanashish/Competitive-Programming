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
		int n,m,l,c;
		vector<int,pair<int,int> >a;
		vector<int,pair<int,int> >b;
		LOOP(i,n)
		{
			cin>>c>>l;
			a[i]=make_pair(l,make_pair(c,0));
		}
		LOOP(i,m)
		{
			cin>>c>>l;
			b[i]=make_pair(l,make_pair(c,0));
		}
		sort(a,a+n);
		sort(b,b+m);
		int ans=0;
		for(int i=n-1;i>=0;i--)
		{
			for(int j=m-1;j>=0;j--)
			{
				if(a[i].first==b[j].first)
				{
					if(a[i].seconf.first==b[j].second.first)
					{
						a[i].seconf.first=0;
						b[i].seconf.first=0;
						break;
					}
					else if(a[i].seconf.first>b[j].second.first)
					{
						a[i].seconf.first-=b[j].second.first;
						b[j].second.first;
					}
					else
					{
						ans=
					}
				}
			}
		}
	}
	
	return 0;
}

