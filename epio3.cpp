#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int hash[26]={0};
int main()
{
	string a;
	cin>>a;
	int l=a.length();
	for(int i=0;i<l;i++)
	{
		hash[a[i]-'A']++;
	}
	char ch;
	cin>>ch;
	cout<<hash[ch-'A'];
	return 0;
}

