#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a=0,b=0,c=0,flag=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='{')	a++;
			else if(s[i]=='}')	a--;
			else if(s[i]=='(')	b++;
			else if(s[i]==')')	b--;
			else if(s[i]=='[')	c++;
			else if(s[i]==']')	c--;
			if(a<0 || b<0 || c<0)	flag=1;
		}
		if(flag==0)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}

