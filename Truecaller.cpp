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
	int type,n,q,l;
	cin>>n>>q;
	int y;
	string z;
	pair<int,string>a[n];
	LOOP(i,n)
	{
		cin>>y;
		std::getline (std::cin,z);
		a[i].first=y;
		a[i].second=z;
	}
	LOOP(i,q)
	{
		cin>>type;
		if(type == 1)
		{
			string b;
			cin>>b;
			vector<int>vv;
			for(int i=0;i<n;i++)
			{
				if(a[i].second == b)
					vv.PB(a[i].first);
			}
			l=vv.size();
			if(l == 0)
			{
				cout<<"-1"<<endl;
				continue;
			}
			//sort(vv,vv+l);
			LOOP(k,l)
				cout<<vv[k]<<" ";
		}
		else
		{
			int number;
			cin>>number;
			string ans;
			bool flag=false;
			LOOP(i,n)
			{
				if(a[i].first == number)
				{
					flag=true;
					ans=a[i].second;
					break;
				}
			}
			if(flag == true)
				cout<<ans;
			else
				cout<<"Not Found";
		}
		cout<<endl;
	}
	return 0;
}

