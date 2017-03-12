#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t,count,pos,x;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a,b;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);		
		}
		b.push_back(0);
		count=0;
		for(int i=1;i<n;i++)
		{
			for(int j=i-1;j>=0;j--)
				if(a[j]<a[i])
					count++;
			b.push_back(count);
			count=0;
		}
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}

