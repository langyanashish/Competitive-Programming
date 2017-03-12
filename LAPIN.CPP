#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	string t="abcdefghijklmnopqrstuvwxyz";
	int s[26];
	while(test--)
	{
		for(int i=0;i<26;i++)
			s[i]=0;
		string a;
		cin>>a;
		int len=a.length();
			for(int i=0;i<(len/2);i++)
			{
				for(int j=0;j<26;j++)
				{
					if(a[i]==t[j])
					{
						s[j]+=1;
					}
				}
			}
		if(len & 1)	
			for(int i=(len/2)+1;i<len;i++)
			{
				for(int j=0;j<26;j++)
				{
					if(a[i]==t[j])
					{
						s[j]+=1;
					}
				}
			}	
		else
			for(int i=(len/2);i<len;i++)
			{
				for(int j=0;j<26;j++)
				{
					if(a[i]==t[j])
					{
						s[j]+=1;
					}
				}
			}	
			int flag=0;
		for(int i=0;i<26;i++)
		{
			if(s[i]%2==0)
				flag=1;
			else	
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

