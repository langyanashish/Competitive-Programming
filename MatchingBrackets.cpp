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
	int n;
	cin>>n;
	LOOP(i,n)
	{
		string a;
		cin>>a;
		stack<char> s;
		bool flag=false;
		int l=a.length();
		LOOP(i,l)
		{
			if(a[i]=='{' || a[i]=='(' || a[i]=='[')
				s.push(a[i]);
			else
			{
				if(s.size()==0)
				{
					flag=true;
					break;
				}
			}
			if(a[i]=='}')
			{
				if(s.top() != '{')
				{
					flag=true;
					break;
				}
				else
					s.pop();
			}
			else if(a[i]==')')
			{
				if(s.top() != '(')
				{
					flag=true;
					break;
				}
				else
					s.pop();
			}
			else if(a[i]==']')
			{
				if(s.top() != '[')
				{
					flag=true;
					break;
				}
				else
					s.pop();
			}
		}
		if(s.size()==0 && flag==false)
			cout<<"YES\n";
		else
			cout<<"NO\n";	
	}
	return 0;
}
