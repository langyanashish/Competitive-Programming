#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x;
	cin>>t;
	vector<int> v;
	for(int i=0;i<t;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<t;i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}
