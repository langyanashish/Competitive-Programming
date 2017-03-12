#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	string t="abcdefghijklmnopqrstuvwxyz";
	int s[52];
	while(test--)
	{
		for(int i=0;i<52;i++)
			s[i]=0;
		char a[201];
		cin>>a;
		for(int i=0;a[i]!='\0';i++)
		{
				for(int j=0;j<26;j++)
				{
					if(a[i]==t[j])
						s[j]++;
					else if(a[i]==t[j]-32)
						s[j+26]++;
				}
		}
		int cost=0;
		for(int i=0;i<52;i++)
		{
			cost+=s[i]/2;
			if(s[i] & 1)
				cost++;
		}
		cout<<cost<<endl;
	}
	return 0;
}

