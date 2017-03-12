#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
	std::cout << std::fixed;
    std::cout << std::setprecision(6);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		deque<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);	
		}	
		sort(v.begin(),v.end());
		for(int i=0;i<k;i++)
		{
			v.pop_front();
			v.pop_back();
		}
		double mean=0; 
		int sum=0;
		for(int i=0;i<v.size();i++)
		{
			sum+=v[i];
		}
		mean=(double)sum/v.size();
		std::cout<<mean<<endl;
	}
	return 0;
}
