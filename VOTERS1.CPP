#include<bits/stdc++.h>
using namespace std;
#define MAX 50000
int hash[MAX+1];
int main()
{
	//std::ios::sync_with_stdio(false);
		vector<int> final;
		int x,y,z;
		cin>>x>>y>>z;
		int a,max=0;
		for(int i=0;i<x+y+z;i++)
		{
			cin>>a;
			if(a>max)
				max=a;
			hash[a]++;
		}
		for(int i=0;i<=max;i++)
		{
			if(hash[i]>1)
				final.push_back(i);
		}		
		cout<<final.size()<<endl;
		for(int i=0;i<final.size();i++)
			cout<<final[i]<<endl;
	return 0;
}
