#include<bits/stdc++.h>
using namespace std;
#define pb		push_back
#define mod		1000000007
int hash[30]={0};
void reset()
{
	for(int i=0;i<26;i++)
		hash[i]=0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		int n;
		cin>>n;
		char ch;
		char a[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			hash[a[i]-'a']++;
		}
		for(int i=0;i<30;i++)
			if(hash[i] & 1)
				ch=i+'a';
		cout<<ch<<endl;
	}
	return 0;
}

