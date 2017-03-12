#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int n,m;
string a[11];
void solve()
{
	cin>>n>>m;
		LOOP(i,n)
				cin>>a[i];
		int c=0;
		LOOP(i,n)
		{
			for(int j=i+1;j<n;j++)
			{
				LOOP(k,m)
				{
					if(a[i][k] == '1' && a[j][k] == '1')
						c++; 
				}
			}
		}
		cout<<c<<endl;	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

