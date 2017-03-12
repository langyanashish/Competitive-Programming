#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int r=0,g=0,b=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='R')	r++;
			else if(s[i]=='G')	g++;
			else if(s[i]=='B')	b++;
		}
		char c;
		if(r>g && r>b)
			c='R';
		else if(g>b)
			c='G';
		else
			c='B';
		int ans=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!=c)
			{
				ans++;	
			}	
		}
		cout<<ans<<endl;
	}
	return 0;
}

