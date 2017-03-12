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
	int t;
	cin>>t;
	char a[51];
	while(t--)
	{
		reset();
		cin>>a;
		int l=strlen(a);
		int max=0;
		for(int i=0;i<l;i++)
		{
			hash[a[i]-'a']++;
			if(hash[a[i]-'a']>max)
				max=hash[a[i]-'a'];
		}
		int total=0;
		for(int i=0;i<30;i++)
		{
			if(hash[i])
				total+=hash[i];
		}
		int k=total-max;
		if(max==k)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

