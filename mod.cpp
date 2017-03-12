#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
#define MOD 	42
bool hash[10000]={0};
void reset()
{
	for(int i=0;i<10000;i++)
		hash[i]=0;
}
int main()
{
	int test=10;
	while(test--)
	{
	reset();
	int a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		a[i]=a[i]%MOD;
		hash[a[i]]++;		
	}
	int ans=0;
	for(int j=0;j<10000;j++)
	{
		if(hash[j])
			ans++;
	}
	cout<<ans<<endl;
	}
	return 0;
}

