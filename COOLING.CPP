#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		vector<int> a;
		vector<int> b;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.push_back(x);
		}
		for(int i=0;i<n;i++){
			int y;
			cin>>y;
			b.push_back(y);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		int j=0;
		for(int i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]<=b[j])
				{
					b[j]=0;
					count++;
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
