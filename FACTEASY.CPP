#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
#define ll		long long
ll fact[101]={0};
void save()
{
	fact[0]=1;
	fact[1]=1;
	for(int i=2;i<101;i++)
	{
		fact[i]=(i * fact[i-1]);
	}
}
int main()
{
	int t;
	cin>>t;
	save();
	while(t--)
	{
		int n;
		cin>>n;
		cout<<fact[n]<<endl;
	}
	return 0;
}
