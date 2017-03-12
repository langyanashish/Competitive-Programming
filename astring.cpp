#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define mod		1000000007
int main()
{
	char s[1000100],temp;
	int k;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s>>k;
		int l=strlen(s);
		int pos=0;
		for(int i=1;i<=k;i++)
		{
			temp=s[pos];
			for(int j=pos+1;j<l-(k-i);j++)
			{
				if(temp>s[j])
				{
					temp=s[j];
					pos=j;
				}
			}
			cout<<temp;
			pos++;
		}
		cout<<"\n";
	}
	return 0;
}

