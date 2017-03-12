#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	vector<int> a;
	while(t--)
	{
		int n;
		cin>>n;
		int flag=0;
			for(int i=0;i<a.size();i++)
				if(a[i]==n%1007)
				{
					flag=1;
					break;
				}
		if(flag==0)
		{
			a.push_back(n%1007);
			cout<<n%1007<<endl;
		}
		else if(flag==1)
			cout<<endl;
	}
	return 0;
}

