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
	int N;
	cin>>N;
	int a[N+1];
	map<int,int>m,m1;
	set<int>s;
	m.clear();
	LOOP(i,N)
	{
		cin>>a[i];
		m[a[i]]=1;
		s.insert(a[i]);
	}
	m1=m;
	int ans=0,c=0;
	for(int i=0;i<N;i++)
	{
		if(m[a[i]]==1)
		for(int j=i;j<N;j++)
		{
			if(m1[a[j]]==0)
				break;
			if(m1[a[j]]==1)
			{
				m1[a[j]]=0;
				c++;
			}
		}
		if(c==s.size())
			ans++;
		m1=m;
		c=0;
	}
	cout<<ans<<endl;
	return 0;
}

