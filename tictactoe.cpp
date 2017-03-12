#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int hash[30]={0};
void reset()
{
	LOOP(i,30)
	{
		hash[i]=0;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		string s;
		cin>>s;
		int l=s.length();
		LOOP(i,l)
		{
			hash[s[i]-'A']++;
		}
		char ch;
		LOOP(i,30)
		{
			ch='A'+i;
			while(hash[i])
			{
				cout<<ch;
				hash[i]--;
			}
		}
		cout<<endl;
	}
	return 0;
}

