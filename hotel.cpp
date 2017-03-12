#include<bits/stdc++.h>
using namespace std;
#define ll      long long
#define pb		push_back
#define loop(i,n)  for(int i=0;i<n;i++)
#define mod		1000000007
bool comp(pair<int, int> p1, pair<int, int> p2)
{
	if(p1.second<p2.second)
		return true;
	else
		return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int guests=1;
		int n;
		cin>>n;
		int x;
		int a[n];
		int d[n];
		loop(i,n)
		{
			cin>>a[i];
		}
		loop(i,n)
		{
			cin>>d[i];
		}
		pair<int,int>p;
		vector<pair<int,int> > m;
		loop(i,n)
		{
			p=(make_pair(a[i],d[i]));
			m.pb(p);
		}
		int c;
		sort(m.begin(),m.end(),comp);
		loop(i,n-1)
		{
			c=1;
			for(int j=i+1;j<n;j++)
			{
				if(m[i].second > m[j].first)
					c++;
			}
			if(guests < c)
				guests=c;
		}
		cout<<guests<<endl;
	}
	return 0;
}

