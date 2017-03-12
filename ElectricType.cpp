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
	LOOP(i,N)
		cin>>a[i];
	int ans=0;
	map<int,int> m,m1;
	m.clear();
	m1.clear();
	LOOP(i,N)
	{
		if(m1[a[i]]==0)
		{
			m1[a[i]]++;
		for(int j=i+1;j<N;j++)
		{
			if(m[a[j]]==0)
			{
				m[a[j]]++;
				ans++;
			}
		}
		}
		m.clear();
	}	
	cout<<ans;
	return 0;
}

