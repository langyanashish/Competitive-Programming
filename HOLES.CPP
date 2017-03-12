#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[101];
		cin>>s;
		int len=strlen(s);
		int ans=0;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R')
				ans++;
			else if(s[i]=='B')
				ans+=2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
