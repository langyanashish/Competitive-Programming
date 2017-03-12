#include<bits/stdc++.h>
using namespace std;
#define MAX 500000
int hash[1000000]={0};
int final[1000000];
int main()
{
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
	int k=0;
	for(int i=0;i<=max;i++)
	{
		if(hash[i]>1)
		{
			final[k]=i;
			k++;
		}
	}
	cout<<k<<endl;
	for(int i=0;i<k;i++)
	cout<<final[i]<<endl;
	return 0;
}
