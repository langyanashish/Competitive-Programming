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
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int ans=0;
		map<int,int>m;
		m.clear();
		bool flag =false;
		bool f=false;
		while(f == false)
		{
			f=true;
		for(int i=1;i<n;i++)
		{
			if(a[i] > a[i+1])
			{
				ans++;
				m[a[i]]++;
				if(m[a[i]] > 2)
				{
					f=true;
					flag=true;
					break;
				}
				f=false;
				swap(a[i],a[i+1]);
			}
		}
		}
		if(flag == true)
			cout<<"Not Possible\n";
		else
			cout<<ans<<endl;
	}
	return 0;
}
