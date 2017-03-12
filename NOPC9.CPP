#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int hash[30]={0};
void reset()
{
	for(int i=0;i<30;i++)
		hash[i]=0;
}
int main()
{
	reset();
	string a;
	cin>>a;
	int l=a.length();
	for(int i=0;i<l;i++)
	{
		if(hash[a[i]-'a'])
		{
			hash[a[i]-'a']++;
			a[i]=' ';
		}
		else
			hash[a[i]-'a']++;
	}
	//cout<<a<<endl;
	for(int i=0;i<l;i++)
	{
		if(a[i]!=' ')
		{
			cout<<a[i]<<hash[a[i]-'a'];
		}
	}
	return 0;
}

