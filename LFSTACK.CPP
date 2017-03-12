/*		August Lunchtime 2016	*/
#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
#define MAX	1000000
vector<vector<int> >a;
vector<int> ans;
int main()
{
	int t,n,sum,temp,l;
	bool flag;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0; 
		LOOP(i,n)
		{
			cin>>temp;
			vector<int> x;
			x.resize(temp);
			sum+=temp;
			for(int j=0;j<temp;j++)
				cin>>x[j];
			a.PB(x);
		}
		ans.resize(sum);
		LOOP(i,sum)
			cin>>ans[i];
		flag=false;
		LOOP(i,a.size())
		{
			l=a[i].size()-1;
			for(int j=0;j<sum;j++)
			{
				if(a[i][l]==ans[j])
					l--;
				if(l==-1)
					break;
			}
			if(l!=-1)
				flag=true;
			if(flag==true)
				break;
		}
		if(flag==false)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		ans.clear();
		LOOP(i,a.size())
			a[i].clear();
		a.clear();
	}
	return 0;
}
