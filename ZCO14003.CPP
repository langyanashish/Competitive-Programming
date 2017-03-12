#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<long long> a;
	vector<long long> b;
	long long n,max=0;
	cin>>n;
	b.resize(n+1);
	for(int i=0;i<n;i++)
	{
		long long x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		b[i]=a[i]*(n-i);
		if(b[i]>max)
			max=b[i];
	}
	cout<<max<<endl;
	return 0;	
}
