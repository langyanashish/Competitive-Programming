#include<bits/stdc++.h>
using namespace std;
#define LL      long double
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;
int main()
{
	LL t;
	cin>>t;
	while(t--)
	{
		LL N,X;
		cin>>N;
		vector<LL> v;
		LOOP(i,N)
		{
			cin>>X;
			v.PB(X);
		}
		vector<int>ans;
		LL S;
		cin>>S;
		bool flag=false;
		LL i=0,j=N-1;
		LL score=0;
		while(i <= j)
		{
			score+=v[i];
			ans.PB(i+1);
			i++;
			if(score >= S)
			{
				flag=true;
				break;
			}
			if(i==j)
			{
				score+=v[i];
				ans.PB(i+1);
				if(score >= S)
					flag=true;
				break;
			}
			score+=v[j];
			ans.PB(j+1);
			j--;
			if(score >= S)
			{
				flag=true;
				break;
			}
			if(i==j)
				break;
		}
		if(flag == false)
			cout<<"BING\n";
		else
		{
			for(LL i=0;i<ans.size();i++)
				cout<<ans[i]<<" ";
			cout<<endl;
		}
		v.clear();
		ans.clear();
	}
	return 0;
}

