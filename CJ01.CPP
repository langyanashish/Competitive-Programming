/* Codejam NSIT 2016 */
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
		set<long long int> s;
		int n,q;
		cin>>n>>q;
		LL p;
		LOOP(i,n)
		{
			cin>>p;
			s.insert(p);
		}	
		LOOP(i,q)
		{
			cin>>p;
			if(s.find(p)!=s.end())
				cout<<"YES\n";
			else
			{
				cout<<"NO\n";
				s.insert(p);
			}
		}
	}
	return 0;
}

