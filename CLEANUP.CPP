#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[m];
		int job[n];
		for(int i=0;i<n;i++)	job[i]=0;
		for(int i=0;i<m;i++)	
		{
			cin>>a[i];
			job[a[i]-1]=1;
			
		}
		vector<int>	chef;
		vector<int> ass;
		int j=0,k=0,l=1;
		for(int i=0;i<n;i++)
		{
			if(job[i]==0)
			{
				if(l & 1)	
				{
					//chef[j++]=i+1;
					chef.push_back(i+1);
					l++;
				}
				else
				{
					//ass[k++]=i+1;
					ass.push_back(i+1);
					l++;
				}
			}
		}
		for(int i=0;i<chef.size();i++)
			cout<<chef[i]<<" ";
		cout<<"\n";
		for(int i=0;i<ass.size();i++)
			cout<<ass[i]<<" ";
		cout<<"\n";
	}
	return 0;
}

