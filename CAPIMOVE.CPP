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
	map<int,int>mm;
	int u,v;
	while(t--)
	{
		int n;
		cin>>n;
		vector<vector<int> >vv(n+1);
		set<int>s;
		int a[n+1];
		mm.clear();
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			mm[a[i]]=i;
			s.insert(a[i]);
		}
		LOOP(i,n-1)
		{
			cin>>v>>u;
			vv[v].PB(u);
			vv[u].PB(v);
		}
		int k,ans,z;
		set<int>::iterator it;
		for(int i=1;i<=n;i++)
		{	
			vector<int>xx;
			for(int j=0;j<vv[i].size();j++)
			{
				k=vv[i][j];
				xx.PB(a[k]);
				s.erase(a[k]);
			}
			if(s.empty() == true)
				cout<<"0 ";
			else
			{
				it=s.end();
				it--;
				ans=*it;
				if(mm[ans]==i)
				{
					it--;
					ans=*it;
				}
				cout<<mm[ans]<<" ";
			}
			for(int c=0;c<xx.size();c++)
				s.insert(xx[c]);
		}
		cout<<endl;
	}
	return 0;
}

