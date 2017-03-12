#include<bits/stdc++.h>
using namespace std;
#define MAX 50000
#define	max(a,b,c)	(a>b?(a>c?a:c):(b>c?b:c))
int main()
{
	std::ios::sync_with_stdio(false);
	int hash[MAX+1][2];
	vector<int> final;
		int x,y,z;
		cin>>x>>y>>z;
		int a[x],b[y],c[z];
		int maximum1=INT_MIN;
		int maximum2=INT_MIN;
		int maximum3=INT_MIN;
		for(int i=0;i<x;i++)
		{
			cin>>a[i];
			hash[a[i]][0]++;
			hash[a[i]][1]=a[i];
			if(a[i]>maximum1)
				maximum1=a[i];
		}
		for(int i=0;i<y;i++)
		{
			cin>>b[i];
			hash[b[i]][0]++;
			hash[b[i]][1]=b[i];
			if(b[i]>maximum2)
				maximum2=b[i];
		}
		for(int i=0;i<z;i++)
		{
			cin>>c[i];
			hash[c[i]][0]++;
			hash[c[i]][1]=c[i];
			if(c[i]>maximum3)
				maximum3=c[i];
		}
		maximum1=max(maximum1,maximum2,maximum3);
		int k=0;
		for(int i=0;i<maximum1;i++)
		{
			if(hash[i][k]>=2)
				final.push_back(hash[i][k+1]);
		}		
		cout<<final.size()<<endl;
		for(int i=0;i<final.size();i++)
			cout<<final[i]<<endl;
	return 0;
}

