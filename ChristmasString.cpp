#include<bits/stdc++.h>
using namespace std;
#define LL      long long
#define LD      long double
#define PB		push_back
#define LOOP(i,n)  for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
const int mod = (int)1e9 + 7;

int main()
{
	string s;
	cin>>s;
	int l=s.length();
	int n;
	cin>>n;
	string a[3001];
	LOOP(i,n)
		cin>>a[i];
	int ans=INT_MIN,c=0;
	bool flag;
	LOOP(i,l)
	{
		if(s[i] == '*')
		{
			ans=n;
			continue;
		}
		else
		{
			c=0;
			for(int j=0;j<n;j++)
			{
				if(a[j][i] == s[i])
					c++;
			}
			ans=max(ans,c);
		}
	}
	cout<<ans<<endl;
	return 0;
}

