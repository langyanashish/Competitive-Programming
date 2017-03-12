#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int hash1[26],hash2[26];
void reset()
{
	LOOP(i,26)
	{
		hash1[i]=0;
		hash2[i]=0;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		reset();
		char a[30],b[30];
		cin>>a>>b;
		int l1=strlen(a);
		int l2=strlen(b);
		LOOP(i,l1)
			hash1[a[i]-'a']++;
		LOOP(i,l2)
			hash2[b[i]-'a']++;
		bool flag=0;
		LOOP(i,26)
		{
			if(hash1[i] != hash2[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

